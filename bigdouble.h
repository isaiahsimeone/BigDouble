#ifndef BIG_DOUBLE_H
#define BIG_DOUBLE_H

/***************************
 *	BigDouble :: Prototype 3
 ***************************/

#include <assert.h> /* Libcheck */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	/* strlen() and memcpy() */
#include <inttypes.h>
#include <math.h>

#define DEBUG /* Enable/Disable debugging */

#define POSITIVE 		0
#define NEGATIVE 		1
#define NO_MANTISSA 	-1
#define VACANT_DIGIT	255

#define CHAR_TO_NUM(i)		(i - '0')
#define NUM_TO_CHAR(i)		(i + '0')
#define MAX(a, b)			(((a)>(b))?(a):(b))
#define MIN(a, b)			(((a)<(b))?(a):(b))
#define ABS(a)				(((a)<(0))?(-a):(a))
#define BOTH_POS(a,b)		(a->sign == POSITIVE && b->sign == POSITIVE)
#define BOTH_NEG(a,b)		(a->sign == NEGATIVE && b->sign == NEGATIVE)

typedef struct {
	uint8_t* value;
	int len;
	int start_idx;
	int sign; /* 0 = positive, 1 = negative */
	uint8_t* mantissa;
	int mantissa_len;
} BigDouble;

/* Public functions */
BigDouble* 			init_bigdouble(const char* val);
int 				destroy_bigdouble(BigDouble* a);
void 				print_bigdouble(BigDouble* b);
char* 				bigdouble_str(BigDouble*);
BigDouble* 			bigdouble_copy(BigDouble*);

/* Operations */
int 				bigdouble_add(BigDouble*, BigDouble*);
int 				bigdouble_sub(BigDouble*, BigDouble*);
int 				bigdouble_cmp(BigDouble*, const char*, BigDouble*);
int 				bigdouble_is_zero(BigDouble* b);
int 				bigdouble_inc(BigDouble* b);
int 				bigdouble_dec(BigDouble*);

/* Functions for internal use only */
static int 			_bigdouble_is_eq(BigDouble*, BigDouble*);
static int 			_bigdouble_is_eq2(BigDouble*, BigDouble*);
static int 			_bigdouble_is_less(BigDouble*, BigDouble*, int);
static int 			_bigdouble_update_start(BigDouble*);
static void 		_bigdouble_swap(BigDouble*, BigDouble*);
static int 			_bigdouble_resize(BigDouble*);
static int 			_bigdouble_resize_mantissa(BigDouble*);
static void 		_bigdouble_add_mantissa(BigDouble*, BigDouble*);
static void 		_bigdouble_sub_mantissa(BigDouble*, BigDouble*);
static void 		_bigdouble_swap_mantissa(BigDouble*, BigDouble*);

/* Yet to be implemented */
int 				bigdouble_or(BigDouble*, BigDouble*);
int 				bigdouble_and(BigDouble*, BigDouble*);
int 				bigdouble_xor(BigDouble*, BigDouble*);
int 				bigdouble_sub(BigDouble*, BigDouble*);
int 				bigdouble_mul(BigDouble*, BigDouble*);
int 				bigdouble_div(BigDouble*, BigDouble*);
int 				bigdouble_mod(BigDouble*, BigDouble*);
int 				bigdouble_pow(BigDouble*, BigDouble*);

/* Debugging functions */
static void 		dump_bigdouble(BigDouble*, const char*);


/*
 * Given a string, this function will create and return a pointer to a
 * BigDouble structure initialised to contain the number that was specified
 * within the string. destroy_bigdouble() should be used to free memory
 * associated with the returned BigDouble structure.
 *
 *     val: The string representation of the number to initialise into a
 *		    new BigDouble structure.
 *
 * returns: A pointer to a BigDouble structure initialised with the number
 * 			specified in the provided string 'val'.
 */
BigDouble* init_bigdouble(const char* val)
{
	BigDouble* b = malloc(sizeof(BigDouble));
	memset(b, 0, sizeof(BigDouble));

	/* Negative value if preceeded by negative sign */
	if (val[0] == '-') {
		b->sign = NEGATIVE;
		val++;
	} else
		b->sign = POSITIVE;

	/* Leading zeros removed - Unless there is only one zero */
	while (val[0] == '0' && val[1] != '.' && strlen(val) - 1 != 0)
		val++;

	/* Calculate length of exponent */
	int i;
	for (i = 0; i < strlen(val); i++)
		if (val[i] == '.')
			break;
	b->len = i;

	/* total length - length of exponent - '\0' = length of mantissa */
	b->mantissa_len = strlen(val) - b->len - 1;
	
	/* Edge case for val = "-0". Should just be 0 */
	if (b->len == 1 && val[0] == '0' && b->sign == NEGATIVE)
		b->sign = POSITIVE;


	b->value = malloc(sizeof(uint8_t) * b->len);
	memset(b->value, 0, sizeof(uint8_t) * b->len);

	for (int i = 0; i < b->len; i++)
		b->value[i] = CHAR_TO_NUM(val[i]);

	/* Read in fractional portion (mantissa) */
	if (b->mantissa_len != NO_MANTISSA) {
		/* +1 to skip over '.' character in string */
		int start_offset = b->len + 1;
		b->mantissa = malloc(sizeof(uint8_t) * b->mantissa_len);
		memset(b->mantissa, 0, sizeof(uint8_t) * b->mantissa_len);

		for (int i = 0; i < b->mantissa_len; i++)
			b->mantissa[i] = CHAR_TO_NUM(val[i + start_offset]);
	}

	b->start_idx = b->len;

	return b;
}

/*
 * This function will print the numerical value contained within
 * a BigDouble structure to stdout.
 *
 * b: A pointer to the BigDouble structure to be printed.
 */
void print_bigdouble(BigDouble* b)
{
	if (b->sign == NEGATIVE)
		printf("-");
	for (int i = 0; i < b->len; i++)
		printf("%d", b->value[i]);
	printf("\n");
}

/*
 * Given a pointer to a BigDouble structure, this function will convert
 * the contents of that structure to a string represent it's value as
 * a number. It is the responsibility of the calling scope to ensure
 * deallocation of the string returned.
 *
 * 		 b: A pointer to the BigDouble structure that should be converted
 *	  		to a string.
 *
 * returns: A string representing the numerical value of the specified
 *			BigDouble structure.
 */
char* bigdouble_str(BigDouble* b)
{
	/* Offset is 1 if the number is negative and the number is not 0 */
	int offset = (b->sign == NEGATIVE && 
		(b->value[0] != 0 || b->mantissa_len != NO_MANTISSA));

	char* str = malloc(sizeof(char) * (b->len + b->mantissa_len + b->sign + 1));
	memset(str, 0, sizeof(char) * (b->len + b->mantissa_len + b->sign + 1));

	/* The number is negative */
	if (offset != 0)
		str[0] = '-';
	
	int pos = 0;
	for (int i = 0; i < b->len; i++) {
		if (b->value[i] != VACANT_DIGIT)
			str[pos++ + offset] = NUM_TO_CHAR(b->value[i]);
		else
			continue;	
	}

	/* Read mantissa to string */
	if (b->mantissa_len != NO_MANTISSA) {
		str[pos++ + offset] = '.';
		for (int i = 0; i < b->mantissa_len; i++)
			str[pos++ + offset] = NUM_TO_CHAR(b->mantissa[i]);
	}

	str[pos + offset] = '\0';

	return str;
}

/*
 * Resizes a specified BigDouble value to accomodate 100% more values.
 * i.e. the internal array containing the integral portion of the number
 * is doubled in size.
 *
 * 		 b: A pointer to the BigDouble structure to be resized.
 *
 * returns: An integer, the new index of where the representation of the
 *			integral portion of the number commences
 */
static int _bigdouble_resize(BigDouble* b)
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

/*
 * Determines whether the number expressed by a specified BigDouble
 * structure is equivalent to zero.
 *
 * 		 b: A pointer to the BigDouble structure to check for being zero.
 *
 * returns: 1 if the specified BigDouble has zero in value, 0 otherwise.
 */
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

/*
 * Free's the memory allocated within the specified BigDouble structure.
 *
 *		 b: A pointer to the BigDouble structure to be deallocated. 
 *
 * returns: 1
 */
int destroy_bigdouble(BigDouble* b)
{
	free(b->value);
	free(b);

	return 0;
}

/*
 * Increments the numerical value represented within the specified
 * BigDouble structure.
 *
 *	  	 b: A pointer to the BigDouble structure to be incremented.
 *
 * returns: 0, always
 */
int bigdouble_inc(BigDouble* b)
{
	BigDouble* one = init_bigdouble("1");

	bigdouble_add(b, one);

	free(one);
	return 0;
}

/*
 * Decrements the numerical value represented within the specified
 * BigDouble structure.
 *
 *	  	 b: A pointer to the BigDouble structure to be decremented.
 *
 * returns: 0, always
 */
int bigdouble_dec(BigDouble* b)
{
	BigDouble* one = init_bigdouble("1");

	bigdouble_sub(b, one);

	free(one);
	return 0;
}

/*
 * Given two BigDouble structures, this function will numerically add
 * the values within the two structures and collect the result in the
 * first (BigDouble parameter 'a').
 *
 * 		 a: A pointer to a BigDouble structure to add 'b' to. i.e. to gather
 *    		the result in
 * 		 b: A pointer to a BigDouble structure to add to 'a'
 *
 * returns: 0
 */
int bigdouble_add(BigDouble* a, BigDouble* b)
{
	// Copy bigdouble b
	BigDouble* b_orig = bigdouble_copy(b);
	// -a + b == b - a
	if (a->sign == NEGATIVE && b->sign == POSITIVE) {
		a->sign = POSITIVE;
		_bigdouble_swap(a, b);
		bigdouble_sub(a, b); // Because of the swap above this is now b - a
		*b = *b_orig;
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

	// If the value container in b is greater than that in a, swap 
	// the two so we won't have to resize
	if (b->len > a->len) {
		_bigdouble_swap(a, b);
	}

	int val_a = 0, val_b = 0, carry = 0;
	for (int i = 1; i <= a->start_idx; i++) {
		val_a = a->value[a->len - i];
		 // Fix to ensure never garbage mem in val_b
		val_b = (b->len - i < 0 ? 0 : b->value[b->len - i]);
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
		// The number has grown in size (consumed vacant digit towards 0) so change
		// the index of the first digit
		a->start_idx++;
	}

	if (a->mantissa_len != NO_MANTISSA || b->mantissa_len != NO_MANTISSA)
		_bigdouble_add_mantissa(a, b);

	*b = *b_orig;
	return 0;
}

/*
 * Given two BigDouble structure's, this function will add the two mantissa's
 * (the fractional portion) of each numbers. The resulting, summed mantissa
 * will be gathered in the first specified BigDouble (a)
 *
 *       a: A pointer to a BigDouble structure to add the mantissa of 'b' to.
 *		    the result will be gathered in this BigDouble structure
 *		 b: A pointer to a BigDouble structure who's mantissa will be added
 *		    to a
 */
static void _bigdouble_add_mantissa(BigDouble* a, BigDouble* b)
{
	if (b->mantissa_len > a->mantissa_len)
		_bigdouble_swap_mantissa(a, b);

	int val_a = 0, val_b = 0, carry = 0;
	for (int i = 1; i <= a->mantissa_len; i++) {
		val_a = a->mantissa[a->mantissa_len - i];
		val_b = (a->mantissa_len - i >= b->mantissa_len ? 0 : b->mantissa[a->mantissa_len - i]);
		a->mantissa[a->mantissa_len - i] = (val_a + val_b + carry) % 10;
		carry = (val_a + val_b + carry) / 10;
	}

	if (carry != 0) {
		if (a->sign == POSITIVE && b->sign == POSITIVE)
			bigdouble_inc(a);
		else
			bigdouble_dec(a);
	}
}

/*
 * This function will make a copy of the specified BigDouble structure
 * and return it. The calling scope should free() the returned copy
 * after use.
 *
 *  target: A pointer to a BigDouble structure to be copied
 *
 * returns: A copy of the specified BigDouble
 */
BigDouble* bigdouble_copy(BigDouble* target)
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

/*
 * Given two BigDouble structures, this function will numerically subtract
 * the values within the two structures and collect the result in the
 * first (BigDouble parameter 'a').
 *
 * 		 a: A pointer to a BigDouble structure to subtract 'b' from. i.e. to gather
 *    		the result in
 * 		 b: A pointer to a BigDouble structure to subtract from 'a'
 *
 * returns: 0
 */
int bigdouble_sub(BigDouble* a, BigDouble* b)
{
	BigDouble* b_orig = bigdouble_copy(b);

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
			intermediary += 10;
			carry = -1;
		} else
			carry = 0;

		a->value[a->len - i] = intermediary;

	}

	_bigdouble_update_start(a);
	

	if (a->mantissa_len != NO_MANTISSA || b->mantissa_len != NO_MANTISSA)
		_bigdouble_sub_mantissa(a, b);

	a->sign = resultant_sign;

	*b = *b_orig;
	return 0;
}

/*
 * Given two BigDouble structure's, this function will subtract the two mantissa's
 * (the fractional portion) of each numbers. The resulting, subtracted mantissa
 * will be gathered in the first specified BigDouble (a)
 *
 *       a: A pointer to a BigDouble structure to subtract the mantissa of 'b' from.
 *		    the result will be gathered in this BigDouble structure
 *		 b: A pointer to a BigDouble structure who's mantissa will be subtracted
 *		    from a
 */
static void _bigdouble_sub_mantissa(BigDouble* a, BigDouble* b)
{

	while (b->mantissa_len > a->mantissa_len)
		_bigdouble_resize_mantissa(a);

	int val_a = 0, val_b = 0, carry = 0, intermediary = 0;
	for (int i = 1; i <= a->mantissa_len; i++) {
		val_a = a->mantissa[a->mantissa_len - i];
		val_b = (a->mantissa_len - i >= b->mantissa_len ? 0 : b->mantissa[a->mantissa_len - i]);

		/* Update value in a */
		intermediary = (val_a - val_b + carry);
		if (intermediary < 0) {
			intermediary += 10; // e.g. -7 -> 3 (with carry of -1)
			carry = -1;
		} else
			carry = 0;

		a->mantissa[a->mantissa_len - i] = intermediary;
	}

	if (carry != 0) {
		if (a->sign == POSITIVE && b->sign == POSITIVE)
			bigdouble_dec(a);
		else
			bigdouble_inc(a);
	}
}

/*
 * This function will resize the portion of the specified BigDouble structure's
 * uint8_t array comprising the BigDouble's mantissa. The function will
 * double the size of the mantissa before copying the original mantissa back.
 * If the specified BigDouble structure has no mantissa, one will be created
 * with 1 space for 1 element.
 *
 *       b: A pointer to the BigDouble structure that will have it's mantissa
 *			resized.
 *
 * returns: An integer specifiying the middle of the newly resized mantissa.
 *			(i.e. the index at which the mantissa now commences from)
 *
 */
static int _bigdouble_resize_mantissa(BigDouble* b)
{
	int mant_len = (b->mantissa_len == NO_MANTISSA ? 1 : b->mantissa_len);

	uint8_t* resized_value = malloc(sizeof(uint8_t) * mant_len * 2);
	memset(resized_value, 0, sizeof(uint8_t) * mant_len * 2);
	/* Above is now [VACANT, VACANT, VACANT, VACANT, ..., VACANT] */
	if (b->mantissa_len != NO_MANTISSA)
		memcpy(resized_value, b->mantissa, mant_len);
	else {
		/* b had no mantissa before call to this function */
		memset(resized_value, 0, sizeof(uint8_t) * mant_len * 2);
		b->mantissa_len = 2;
		b->mantissa = resized_value;
		return 0;
	}

	/* Original value array no longer needed */
	free(b->mantissa);

	b->mantissa_len *= 2;
	b->mantissa = resized_value;

	/* Middle of resized array is where the value starts now */
	return b->mantissa_len / 2;
}

/*
 * Swaps two BigDouble structures to point to each other
 *
 * a: A pointer to a BigDouble structure that will point to
 *	  the argument 'b' 
 * b: A pointer to a BigDouble structure that will point to
 *	  the argument 'a'
 */
static void _bigdouble_swap(BigDouble* a, BigDouble* b)
{
	BigDouble temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/*
 * Swaps the mantissa's of two BigDouble structures
 *
 * a: A pointer to a BigDouble structure whose mantissa will be swapped with b
 * b: A pointer to a BigDouble structure whose mantissa will be swapped with a
 */
static void _bigdouble_swap_mantissa(BigDouble* a, BigDouble* b)
{

	uint8_t* new_a = malloc(b->mantissa_len * sizeof(uint8_t));
	memset(new_a, 0, b->mantissa_len * sizeof(uint8_t) + 1);
	uint8_t* new_b = malloc(a->mantissa_len * sizeof(uint8_t));
	memset(new_b, 0, a->mantissa_len * sizeof(uint8_t) + 1);


	for (int i = 0; i < a->mantissa_len; i++)
		new_b[i] = a->mantissa[i];

	for (int i = 0; i < b->mantissa_len; i++)
		new_a[i] = b->mantissa[i];

	free(a->mantissa);
	free(b->mantissa);

	a->mantissa = new_a;
	b->mantissa = new_b;

	int temp = a->mantissa_len;
	a->mantissa_len = b->mantissa_len;
	b->mantissa_len = temp;

}

/*
 * This function remove's leading zeros from a specified BigDouble
 * number and recalculates the start index. This function is internal
 * and used after operations which cause leading zeros to be present.
 *
 *       a: A pointer to the BigDouble structure to be updated
 *
 * returns: 0
 */
static int _bigdouble_update_start(BigDouble* a)
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

/*
 * This function will perform a comparison on two BigDouble numbers as
 * specified by 'op' argument.
 *
 *       a: A pointer to the first comparison argument
 *	    op: A string defining which comparison operation should be performed
 *	     b: A pointer to the second comparison argument
 *
 * returns: The result of comparison (1 or 0)
 */
int bigdouble_cmp(BigDouble* a, const char* op, BigDouble* b)
{
	BigDouble* a_orig = bigdouble_copy(a);
	BigDouble* b_orig = bigdouble_copy(b);
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

/*
 * In conjunction with _bigdouble_is_eq2, this function will
 * compare two BigDouble structures and check for equivalence.
 *
 *       a: A pointer to the first BigDouble structure to be compared
 *       b: A pointer to the second BigDouble structure to be compared
 *
 * returns: 1 if the structures are equivalent, 0 otherwise
 */
static int _bigdouble_is_eq(BigDouble* a, BigDouble* b) 
{
	BigDouble* a_orig = bigdouble_copy(a);
	BigDouble* b_orig = bigdouble_copy(b);

	int ret = _bigdouble_is_eq2(a, b);

	*a = *a_orig;
	*b = *b_orig;
	
	return ret;
}

/*
 * In conjunction with _bigdouble_is_eq, this function will
 * compare two BigDouble structures and check for equivalence.
 *
 *       a: A pointer to the first BigDouble structure to be compared
 *       b: A pointer to the second BigDouble structure to be compared
 *
 * returns: 1 if the structures are equivalent, 0 otherwise
 */
static int _bigdouble_is_eq2(BigDouble* a, BigDouble* b)
{
	if (a->start_idx != b->start_idx || a->sign != b->sign)
		return 0;

	if (b->start_idx > a->start_idx)
		_bigdouble_swap(a, b);

	/* Check exponent equivalence */
	for (int i = a->start_idx; i > 0; i--) {
		if (a->value[a->len - i] == VACANT_DIGIT || b->value[b->len - i] == VACANT_DIGIT)
			break;
		if (a->value[a->len - i] != b->value[b->len - i])
			return 0;
	}

	/* Check mantissa equivalence */
	if (b->mantissa_len > a->mantissa_len) 
		_bigdouble_swap(a, b);
	
	if (a->mantissa_len != NO_MANTISSA) {
		for (int i = 0; i < a->mantissa_len; i++) {
			if (a->mantissa[i] == VACANT_DIGIT)
				break;

			// if index becomes negative, we treat whatever value at that index as 0
			int val_a = (a->mantissa_len - i <= 0 ? 0 : a->mantissa[i]);
			int val_b = (b->mantissa_len - i <= 0 ? 0 : b->mantissa[i]);

			if (val_a != val_b)
				return 0;
		}
	}
	return 1;
}

/*
 * Given two BigDouble structures, this function will check whether
 * the first specified argument (a) is less than the second specified
 * argument (b). (or equal if specified)
 *
 * 		  a: A pointer to the first BigDouble structure to be compared
 *		  b: A pointer to the second BigDouble structure to be compared
 * or_equal: If set to 1, this function will also check whether a and b
 *			 are equal
 *
 *  returns: 1 if a is less than b (or equal, if specified). 0 otherwise
 */
static int _bigdouble_is_less(BigDouble* a, BigDouble* b, int or_equal)
{
	// a < 0 but b >= 0
	if (a->sign == NEGATIVE && b->sign == POSITIVE)
		return 1;

	if (a->sign == POSITIVE && b->sign == NEGATIVE)
		return 0;

	if (a->sign == NEGATIVE && b->sign == NEGATIVE)
		// Swap if both are negative -a < -b == b < a
		_bigdouble_swap(a, b); 

	// If the number of digits comprising a is greater than that of b, false
	if (a->start_idx > b->start_idx)
		return 0;

	// If the number of digits comprising b is greater than that of a, true
	if (a->start_idx < b->start_idx)
		return 1;

	if (_bigdouble_is_eq(a, b))
		return or_equal;

	for (int i = a->start_idx; i > 0; i--) {
		if (a->value[a->len - i] < b->value[b->len - i])
			return 1;
		if (a->value[a->len - i] > b->value[b->len - i])
			return 0;
	}

	/* Mantissa checking - integral part is equal if execution reaches here */
	if (a->mantissa_len > b->mantissa_len)
		return 0;
	if (a->mantissa_len < b->mantissa_len)
		return 1;

	if (b->mantissa_len > a->mantissa_len) 
		_bigdouble_swap(a, b);
	
	if (a->mantissa_len != NO_MANTISSA) {
		for (int i = 0; i < a->mantissa_len; i++) {
			if (a->mantissa[i] == VACANT_DIGIT) 
				break;

			int val_a = (a->mantissa_len - i <= 0 ? 0 : a->mantissa[i]);
			int val_b = (b->mantissa_len - i <= 0 ? 0 : b->mantissa[i]);
			
			if (val_a > val_b)
				return 0;
			if (val_a < val_b)
				return 1;
		}
	}

	return 0;
}

/* Debugging only */
static void dump_bigdouble(BigDouble* b, const char* msg)
{
	#ifdef DEBUG
		printf("--- %s ---\n", msg);
		for (int i = 0; i < b->len; i++)
			printf("%d, ", b->value[i]);
		printf("\n");
	#endif
}

#endif /* BIG_DOUBLE_H */