#ifndef BIG_DOUBLE_H
#define BIG_DOUBLE_H

#include <assert.h>

/*
	PROTOTYPE 1
*/
//TODO:::: REMEMBER TO FREE TEMP BIGDOUBLES

#define DEBUG

#include <stdio.h>
#include <stdlib.h>
#include <string.h>	/* strlen and memcpy */
#include <inttypes.h>
#include <math.h>

#define POSITIVE 		0
#define NEGATIVE 		1
#define NO_MANTISSA 	-1
#define VACANT_DIGIT	255

// Converts a character of a single digit integer to an integer.. e.g. '9' -> 9, '0' -> 0 etc
#define CHAR_TO_NUM(i)	(i - '0')
#define NUM_TO_CHAR(i)	(i + '0')
#define MAX(a, b)	(((a)>(b))?(a):(b))
#define MIN(a, b)	(((a)<(b))?(a):(b))
#define ABS(a)		(((a)<(0))?(-a):(a))


typedef struct {
	uint8_t* value;
	int len;
	int start_idx;
	int sign; // 0 = +ve, 1 = -ve
	uint8_t* mantissa;
	int mantissa_len;

} BigDouble;


BigDouble* init_bigdouble(const char* val);
int destroy_bigdouble(BigDouble* a);
/*int bigdouble_or(BigDouble a, BigDouble b);
int bigdouble_and(BigDouble a, BigDouble b);
int bigdouble_xor(BigDouble a, BigDouble b);

int bigdouble_sub(BigDouble a, BigDouble b);
int bigdouble_mul(BigDouble a, BigDouble b);
int bigdouble_div(BigDouble a, BigDouble b);
int bigdouble_mod(BigDouble a, BigDouble b);
int bigdouble_pow(BigDouble a, BigDouble b);
*/
int bigdouble_add(BigDouble*, BigDouble*);
int bigdouble_sub(BigDouble*, BigDouble*);
int bigdouble_cmp(BigDouble*, const char* ,BigDouble*);

int bigdouble_inc(BigDouble* b);
void print_bigdouble(BigDouble* b);
int bigdouble_is_zero(BigDouble* b);
/*int bigdouble_dec(BigDouble* b);
int clear_bigdouble(BigDouble a);

int bigdouble_cmp(BigDouble a, Operator op, Bigdouble b); // BD1 >= BD2 or BD1 != BD2 etc
*/
int bigdouble_dec(BigDouble*);
// initialise a bigdouble
char* bigdouble_str(BigDouble*);
void dump_bigdouble(BigDouble*, const char*);

int _bigdouble_is_eq(BigDouble*, BigDouble*);
int _bigdouble_is_less(BigDouble*, BigDouble*, int);
int _bigdouble_update_start(BigDouble*);
void _bigdouble_swap(BigDouble*, BigDouble*);
BigDouble* _bigdouble_copy(BigDouble*);



BigDouble* init_bigdouble(const char* val)
{
	BigDouble* b = malloc(sizeof(BigDouble));
	memset(b, 0, sizeof(BigDouble));			// OSX addition

	if (val[0] == '-') {
		b->sign = NEGATIVE;
		val++;
	} else
		b->sign = POSITIVE;

	/* Leading zeros removed - Unless there is only one zero */
	while (val[0] == '0' && val[1] != '.' && strlen(val) - 1 != 0) {
		val++;
	}

	/* Calculate length of exponent */
	int i;
	for (i = 0; i < strlen(val); i++) {
		if (val[i] == '.')
			break;
	}
	b->len = i;

	b->mantissa_len = strlen(val) - b->len - 1; // total length - length of exponent - '\0' = length of mantissa
	//b->len = strlen(val);
	
	// special case for val = "-0". Should just be 0
	if (b->len == 1 && val[0] == '0' && b->sign == NEGATIVE)
		b->sign = POSITIVE;


	b->value = malloc(sizeof(uint8_t) * b->len);
	memset(b->value, 0, sizeof(uint8_t) * b->len);		// OSX addition

	for (int i = 0; i < b->len; i++) {
		b->value[i] = CHAR_TO_NUM(val[i]);
	}

	if (b->mantissa_len != NO_MANTISSA) {
		int start_offset = b->len + 1; // +1 to skip over '.' character in string
		b->mantissa = malloc(sizeof(uint8_t) * b->mantissa_len);
		memset(b->mantissa, 0, sizeof(uint8_t) * b->mantissa_len);

		for (int i = 0; i < b->mantissa_len; i++) {
			b->mantissa[i] = CHAR_TO_NUM(val[i + start_offset]);
		}
	}

	b->start_idx = b->len;

	return b;
}

// add fmt, va args, ... args, stream (like fprintf)
void print_bigdouble(BigDouble* b)
{
	if (b->sign)
		printf("-");
	for (int i = 0; i < b->len; i++) {
		printf("%d", b->value[i]);
	}
	printf("\n");
}

// Currently for debugging
// User responsible for freeing string
char* bigdouble_str(BigDouble* b)
{
	// Offset is 1 if the number is negative and the number is not 0
	int offset = (b->sign == NEGATIVE && b->value[0] != 0);
	char* str = malloc(sizeof(char) * (b->len + b->mantissa_len + b->sign + 1));
	memset(str, 0, sizeof(char) * (b->len + b->mantissa_len + b->sign + 1));			// OSX addition

	// Negative 0 isn't a thing
	if (offset != 0)
		str[0] = '-';
	
	int pos = 0;
	for (int i = 0; i < b->len; i++) {
		if (b->value[i] != VACANT_DIGIT) {
			str[pos++ + offset] = NUM_TO_CHAR(b->value[i]);
		} else {
			//printf("OMITTING: %d\n", b->value[i]);
			continue;	
		}
	}
	// Copy mantissa to string
	if (b->mantissa_len != NO_MANTISSA) {
		str[pos++ + offset] = '.'; // decimal point
		for (int i = 0; i < b->mantissa_len; i++) {
			str[pos++ + offset] = NUM_TO_CHAR(b->mantissa[i]);
		}
	}

	str[pos + offset] = '\0';
	//dump_bigdouble(b, "stringified");
	return str;
}

// Doubles the number of digits that a bigdouble can record
/*
 * Returns the index of the start of the value in the resized value array.
 */
int _bigdouble_resize(BigDouble* b)
{
	uint8_t* resized_value = malloc(sizeof(uint8_t) * b->len * 2);
	memset(resized_value, VACANT_DIGIT, sizeof(uint8_t) * b->len * 2);
	/* Above is now [VACANT, VACANT, VACANT, VACANT, ..., VACANT] */
	memcpy(resized_value + b->len, b->value, b->len);
	/* Above is now [VACANT, VACANT, ... VACANT, B->VALUE[0], B->VALUE[1],..] */

	/* Original value array no longer needed */
	free(b->value);

	b->len *= 2;
	b->value = resized_value;

	return b->len / 2; /* Middle of resized array is where the value starts now */
}

int bigdouble_is_zero(BigDouble* b)
{
	/* A bigdouble is 0 if the value contains only 0's and vacant digits */
	for (int i = 0; i < b->len; i++)
		if (b->value[i] != 0 && b->value[i] != VACANT_DIGIT)
			return 0;
	/* Check mantissa */
	if (b->mantissa_len != NO_MANTISSA) {
		for (int i = 0; i < b->mantissa_len; i++)
			if (b->mantissa[i] != 0 && b->mantissa[i] != VACANT_DIGIT) {
				return 0;
			}
	}
	return 1;
}

// TODO: error checking
int destroy_bigdouble(BigDouble* b)
{
	free(b->value);
	free(b);

	return 0;
}

/* Incrementing a negative calls bigdouble_dec. Similarly, decrementing
 * a negative calls bigdouble_inc. Since both functions call eachother, we
 * require some way of differentiating second level calls to avoid looping */
int incdec_cross_call = 0;

int bigdouble_inc(BigDouble* b)
{
	/* 
	 * Incrementing a negative is the same as decrementing that value
	 * as a positive and concatenating a negative sign
	 */
	if (b->sign == NEGATIVE && incdec_cross_call == 0) {
		incdec_cross_call = 1;
		bigdouble_dec(b);
		incdec_cross_call = 0;
		return 0;
	}

	for (int i = b->len - 1; i >= 0; i--) {
		/* Case for carry */
		if (b->value[i] == 9) {
			b->value[i] = 0;
			/* Have we reached the start of the array? If so, resize */
			if (i == 0)
				i = _bigdouble_resize(b);

		} else {
			/* Vacant digit is only reached if we have a carry */
			if (b->value[i] == VACANT_DIGIT) {
				b->start_idx--; // move the start of the number indicator back
				b->value[i] = 1;
			}
			else
				b->value[i]++;
			break;
		}
	}
	//dump_bigdouble(b, "incremented");
	return 0;
}

int bigdouble_dec(BigDouble* b)
{
	/* 
	 * Decrementing a negative is the same as incrementing that value
	 * as a positive and concatenating a negative sign
	 */
	if (b->sign == NEGATIVE && incdec_cross_call == 0) {
		incdec_cross_call = 1;
		bigdouble_inc(b);
		incdec_cross_call = 0;
		return 0;
	}

	// Fix for decrementing the value: 0
	if (b->len == 1 && b->value[0] == 0) {
		b->value[0] = 1;
		b->sign = NEGATIVE;
		return 0;
	}

	for (int i = b->len - 1; i >= 0; i--) {
		if (b->value[i] == 0) {
			b->value[i] = 9;
		} else {
			if (i == 0 && b->len != 1) {
				b->start_idx++; // Consumed vacant digit, number has grown by one towards index 0
				b->value[i] = VACANT_DIGIT;
			}
			else
				b->value[i]--;
			break;
		}
	}
	//dump_bigdouble(b, "decremented");
	return 0;
}

/*
 * Consider a value array for some BigDouble a.
 * a = [9, 9]
 * b = [1]
 * Calling bigdouble_add(a, b) changes a to become
 * a = [V, 1, 0, 0]
 *
 * O(n), where n is the number of digits in MAX(a->value, b->value)
 * or in the case of resizing, where n is the size of the value array
 */
int bigdouble_add(BigDouble* a, BigDouble* b)
{
	// Copy bigdouble b
	BigDouble* b_orig = _bigdouble_copy(b);
	// -a + b == b - a
	if (a->sign == NEGATIVE && b->sign == POSITIVE) {
		a->sign = POSITIVE;
		_bigdouble_swap(a, b);
		bigdouble_sub(a, b); // Because of the swap above this is now b - a :: OSX MOD while the result still gathers in b
		*b = *b_orig;
		// DESTROY
		return 0;
	}
	// a + (-b) == a - b
	if (a->sign == POSITIVE && b->sign == NEGATIVE) {
		b->sign = POSITIVE;
		bigdouble_sub(a, b);
		b->sign = NEGATIVE;
		*b = *b_orig;
		return 0;
	}
	// -a + -b == -(a + b) 
	if (a->sign == NEGATIVE && b->sign == NEGATIVE) {
		// already handled
	}

	// If the value container in b is greater than that in a, swap the two so we won't have to resize
	if (b->len > a->len) {
		_bigdouble_swap(a, b);
	}

	int val_a = 0, val_b = 0, carry = 0;

	//printf("%d + %d\n", a->value[bound - len_offset_a - 5], b->value[bound - len_offset_b - 5]);
	for (int i = 1; i <= a->start_idx; i++) {
		val_a = a->value[a->len - i];
		val_b = (b->len - i < 0 ? 0 : b->value[b->len - i]); // fix to ensure that val_b is never garbage OSX FIX
		/* Update value in a */
		a->value[a->len - i] = (val_a + val_b + carry) % 10;
		/* Carry for next */
		carry = (val_a + val_b + carry) / 10;
	}

	// We have a carry outside of the bound.. So we need a new place for the digit
	// Resize and then set that carry
	if (carry != 0) {
		_bigdouble_resize(a);
		a->value[a->start_idx - 1] = carry;
		a->start_idx++; // The number has grown in size (consumed vacant digit towards 0) so change the index of the first digit
		// done.
	}
	*b = *b_orig;
	return 0;
}

BigDouble* _bigdouble_copy(BigDouble* target)
{
	BigDouble* copy = malloc(sizeof(BigDouble));

	copy->len = target->len;
	copy->mantissa_len = target->mantissa_len;
	copy->start_idx = target->start_idx;
	copy->sign = target->sign;

	copy->value = malloc(sizeof(uint8_t) * copy->len);
	memcpy(copy->value, target->value, copy->len * sizeof(uint8_t));
	
	/* Copy mantissa */
	if (target->mantissa_len != NO_MANTISSA) {
		copy->mantissa = malloc(sizeof(uint8_t) * target->mantissa_len);
		memcpy(copy->mantissa, target->mantissa, target->mantissa_len * sizeof(uint8_t));
	}

	return copy;
}

// a - b
/*
 * bigdouble_sub(a, b)     ->  a - b
 * bigdouble_sub(-a, b)    -> -a - b    -> -(a + b)  
 * bigdouble_sub(a, -b)    -> a - (-b)  -> a + b
 * bigdouble_sub(-a, -b)   -> -a - (-b) -> -a + b -> b - a
 *
 *
 * GOOD START BUT THERE PERSISTS AN ISSUE WHERE ONCE A NUMBER IN A IS NO LONGER
 * IN USE, IT NEEDS TO BE SET TO VACANT_DIGIT.
 *
 */
int bigdouble_sub(BigDouble* a, BigDouble* b)
{
	BigDouble* b_orig = _bigdouble_copy(b);
	// -a - b == -(a + b)
	if (a->sign == NEGATIVE && b->sign == POSITIVE) {
		a->sign = POSITIVE;
		bigdouble_add(a, b);
		a->sign = NEGATIVE;
		*b = *b_orig;
		return 0;
	}
	// a - (-b) == a + b
	if (a->sign == POSITIVE && b->sign == NEGATIVE) {
		// Change sign of b for add function
		b->sign = POSITIVE;
		bigdouble_add(a, b);
		b->sign = NEGATIVE;
		*b = *b_orig;
		return 0;
	}

	int resultant_sign = POSITIVE;

	// (-a) - (-b) == -a + b == b - a == -(a - b), (a,b E Z+)		WILL NOT WORK BECAUSE IT IS SWAPPED BACK....
	
	// removed this which somehow fixed a - b where a, b < 0 && a > b
	//if (a->sign == NEGATIVE && b->sign == NEGATIVE)
	//	resultant_sign = NEGATIVE;
	
	// Swap to subtract smaller from larger. We will work out the sign later...... THIS WILL PROBABLY NOT WORK FOR DETERMINING THE SIGN
	// We don't use bigdouble_is_less because we want to subtract from the number with the most digits (i.e. if a == -10000 and b = 1)
	// a < b.. But a has more digits
	int swapped = 0; // REMOVE::::
	if (b->start_idx > a->start_idx || _bigdouble_is_less(a, b, 0)) {
		resultant_sign = NEGATIVE;
		_bigdouble_swap(a, b);
	}

	int val_a, val_b, intermediary, carry = 0;

	// Smaller number is always subtracted from larger number
	for (int i = 1; i <= a->start_idx; i++) {
		val_a = a->value[a->len - i];
		val_b = (b->len - i < 0 ? 0 : b->value[b->len - i]);

		/* Update value in a */
		intermediary = (val_a - val_b + carry);
		if (intermediary < 0) {
			intermediary += 10; // e.g. -7 -> 3 (with carry of -1)
			carry = -1;
		} else {
			carry = 0;
		}

		// Ensures that a has no leading
		a->value[a->len - i] = intermediary;

	}

	_bigdouble_update_start(a);
	a->sign = resultant_sign;

	*b = *b_orig;
	return 0;
}

void _bigdouble_swap(BigDouble* a, BigDouble* b)
{
	BigDouble temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int _bigdouble_update_start(BigDouble* a)
{
	// removes leading 0's from a BigDouble and set start_idx
	
	// Just one 0.. We leave that
	if (a->len == 1 && a->value[0] == 0) {
		a->start_idx = 1;
		return 0;
	}
	for (int i = 0; i < a->len; i++) {
		if (a->value[i] == VACANT_DIGIT)
			continue;
		if (a->value[i] == 0) {
			a->value[i] = VACANT_DIGIT;
			continue;
		}

		// else
		a->start_idx = a->len - i;
		break;
	}

	return 0;
}

int bigdouble_cmp(BigDouble* a, const char* op, BigDouble* b)
{
	BigDouble* a_orig = _bigdouble_copy(a);
	BigDouble* b_orig = _bigdouble_copy(b);
	int ret = 0;
	
	switch (op[0]) {
		case '>':
			if (op[1] == '=')
				ret = !_bigdouble_is_less(a, b, 0); // (a >= b) == ~(a < b)
			else
				ret = !_bigdouble_is_less(a, b, 1);
			break;
		case '<':
			if (op[1] == '=')
				ret = _bigdouble_is_less(a, b, 1);
			else
				ret = _bigdouble_is_less(a, b, 0);
			break;
		case '=': 
			if (op[1] == '=')
				ret = _bigdouble_is_eq(a, b);
			break;
		case '!':
			if (op[1] == '=')
				ret = !_bigdouble_is_eq(a, b);
			break;
		default:
			printf("Unknown op\n");
			break;
	}
	*a = *a_orig;
	*b = *b_orig;

	return ret;
}

int _bigdouble_is_eq(BigDouble* a, BigDouble* b)
{
	if (a->start_idx != b->start_idx || a->sign != b->sign) {
		
		return 0;
	}

	if (b->start_idx > a->start_idx)
		_bigdouble_swap(a, b);

	//printf("%d + %d\n", a->value[bound - len_offset_a - 5], b->value[bound - len_offset_b - 5]);
	/* Check exponent equivalence */
	for (int i = a->start_idx; i > 0; i--) {
		//printf("check a[%d] = %d\n", i, a->value[i]);
		//printf("check b[%d] = %d\n", i, b->value[i]);
		if (a->value[a->len - i] == VACANT_DIGIT || b->value[b->len - i] == VACANT_DIGIT) {	// I think this is the issue.. It just so happens that the garbage mem == VACANT_DIGIT????
			//printf("broke since a[%d] = %d and b[%d] = %d\n", i, a->value[a->len - i], i, b->value[b->len - i]);
			break;
		}
		if (a->value[a->len - i] != b->value[b->len - i]) {
			//printf("ret 0 via loop 1 arg1=%d & arg2=%d and i=%d\n",a->value[a->len - i], b->value[b->len - i], i);
			return 0;
		}
	}

	/* Check mantissa equivalence */
	// 1.0, 1
	// 1, 1.1
	if (b->mantissa_len > a->mantissa_len) 
		_bigdouble_swap(a, b);
	
	if (a->mantissa_len != NO_MANTISSA) {
		for (int i = 0; i < a->mantissa_len; i++) {
			if (a->mantissa[i] == VACANT_DIGIT) {
				break;
			}


			// if index becomes negative, we treat whatever value at that index as 0 which is mathematically valid.
			// e.g. if  a = 1.00000
			// and      b = 1.0. This will cause them to be equivalent
			int val_a = (a->mantissa_len - i <= 0 ? 0 : a->mantissa[i]);
			int val_b = (b->mantissa_len - i <= 0 ? 0 : b->mantissa[i]);
			
			//  int val_b = MAX(0, b->mantissa[b->mantissa_len - i]);		THIS BETTER
			if (val_a != val_b) {
				//printf("ret 0 via mant loop\n");
				return 0;
			}
		}
	}

	return 1;
}

int _bigdouble_is_less(BigDouble* a, BigDouble* b, int or_equal)
{
	// a < 0 but b >= 0
	if (a->sign == NEGATIVE && b->sign == POSITIVE)
		return 1;

	if (a->sign == POSITIVE && b->sign == NEGATIVE) {
		return 0;
	}

	if (a->sign == NEGATIVE && b->sign == NEGATIVE) {
		// Swap if both are negative -a < -b == b < a..... in this case
		// we can ignore the signs		why?????
		_bigdouble_swap(a, b); // now we're checking for b < a which again, is the same as checking for -a < -b, a,b E Z+
	}

	// If the number of digits comprising a is greater than that of b, false
	if (a->start_idx > b->start_idx) {
		return 0;
	}
	// If the number of digits comprising b is greater than that of a, true
	if (a->start_idx < b->start_idx)
		return 1;
	
	//dump_bigdouble(a, "a");
	//dump_bigdouble(b, "b");

	// If we're doing 'less than or equal' 
	// If or_equal = true and a == b, then true
	// If or_equal = false and a == b, then false
	if (_bigdouble_is_eq(a, b)) {
		return or_equal;
	}

	for (int i = a->start_idx; i > 0; i--) {
		if (a->value[a->len - i] < b->value[b->len - i])
			return 1;
		if (a->value[a->len - i] > b->value[b->len - i]) {
			return 0;
		}
	}

	// have to check mantissa's here.. if they have them
	//printf("SOMEHOW reached here\n");
	return 0;
}

// DEBUG
void dump_bigdouble(BigDouble* b, const char* msg)
{
#ifdef DEBUG
	printf("--- %s ---\n", msg);
	for (int i = 0; i < b->len; i++)
		printf("%d, ", b->value[i]);
	printf("\n");
#endif
}

#endif /* BIG_DOUBLE_H */