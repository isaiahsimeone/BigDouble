#ifndef BIG_DOUBLE_H
#define BIG_DOUBLE_H

/*
	PROTOTYPE 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <math.h>

#define POSITIVE 0
#define NEGATIVE 1
#define DIGITS_PER_BLOCK 19
#define MAX_BLOCK_VAL 999999999999999999

// Converts a character of a single digit integer to an integer.. e.g. '9' -> 9, '0' -> 0 etc
#define CHAR_TO_NUM(i) (i - '0')
typedef struct {
	uint64_t val;
	int leading_zeros;
} Block;

typedef struct {
	Block* block;
	int blocks_allocated;
	int len;
	int sign; // 0 = +ve, 1 = -ve

} BigDouble;


BigDouble* init_bigdouble(const char* val);
int destroy_bigdouble(BigDouble* a);
/*int bigdouble_or(BigDouble a, BigDouble b);
int bigdouble_and(BigDouble a, BigDouble b);
int bigdouble_xor(BigDouble a, BigDouble b);
int bigdouble_add(BigDouble a, BigDouble b);
int bigdouble_sub(BigDouble a, BigDouble b);
int bigdouble_mul(BigDouble a, BigDouble b);
int bigdouble_div(BigDouble a, BigDouble b);
int bigdouble_mod(BigDouble a, BigDouble b);
int bigdouble_pow(BigDouble a, BigDouble b);
*/
int bigdouble_inc(BigDouble* b);
void print_bigdouble(BigDouble* b);
/*int bigdouble_dec(BigDouble* b);
int clear_bigdouble(BigDouble a);
int bigdouble_is_zero(BigDouble a);
int bigdouble_cmp(BigDouble a, Operator op, Bigdouble b); // BD1 >= BD2 or BD1 != BD2 etc
*/
// initialise a bigdouble
char* bigdouble_str(BigDouble*);


/*
 * Consider a number with 50 digits. It would be stored as:
 * 
 *  <- (Most significant)               (Least Significant) ->
 * -------------------|-------------------|-------------------|
 *        Block0      |       Block1      |       Block2      |
 *
 * Where each block can record 19 digits. The highest (LHS) 7 positions
 * of Block 0 would be unused and Blocks 1 and 2 would be full
 *
 * Each block consists of one 64 bit unsigned integer. Each 64 bit unsigned integer
 * is used to store 19 decimal digits.
 *
 * COMMENT NO LONGER REFLECTS WHAT HAPPENS. WE STORE FROM BLOCK 0 TO FILL IT WHILE THE LOWER PART OF THE LAST BLOCK WILL BE EMPTY
 *
 *
 */
// don't use strlen (0(n))

BigDouble* init_bigdouble(const char* val)
{
	BigDouble* b = malloc(sizeof(BigDouble));
	// Advance over sign
	if (val[0] == '-') {
		b->sign = NEGATIVE;
		val++;
	} else {
		b->sign = POSITIVE;
	}

	b->len = strlen(val);
	int blocks_required = (b->len <= DIGITS_PER_BLOCK ? 1: b->len / DIGITS_PER_BLOCK + 1);	// Fix for test case init4
	b->blocks_allocated = blocks_required;
	printf("Allocating %d blocks...\n", blocks_required);
	printf("There are %d digits\n", b->len);
	b->block = malloc(sizeof(uint64_t) * blocks_required);

	for (int i = 0; i < blocks_required; i++) {
		b->block[i].val = (uint64_t)malloc(sizeof(uint64_t));
		memset(&b->block[i], 0, sizeof(Block));
	}

	// fill blocks with the value
	// starting from block 0, fill from left to right
	int block_idx;
	int zeros_commence_block = 0;
	int last_digit = 1;
	for (int i = 0; i < strlen(val); i++) {
		block_idx = i/DIGITS_PER_BLOCK;
		last_digit = i/DIGITS_PER_BLOCK == (i + 1)/DIGITS_PER_BLOCK;
		// Account for 0's starting a new block - block_idx > 0 fixes just the value 0 from being padded with 0's
		if (block_idx > 0 && (i % DIGITS_PER_BLOCK == 0) && val[i] == '0') {
			while (val[i] == '0') {
				b->block[i/DIGITS_PER_BLOCK].leading_zeros++;
				i++;
			}
		}
		//} else {
			// At start of new block, keep incrementing leading_Zeros until non-zero encountered.
			b->block[i/DIGITS_PER_BLOCK].val += CHAR_TO_NUM(val[i]);
			// Don't multiply by 10 if last digit of block or last digit of val
			if (last_digit && i != strlen(val) - 1) 
				b->block[i/DIGITS_PER_BLOCK].val *= 10;
			printf("now: %llu\n", b->block[i/DIGITS_PER_BLOCK].val);
		//}
	}
	print_bigdouble(b);
	
	return b;
}

// add fmt, va args, ... args, stream (like fprintf)
void print_bigdouble(BigDouble* b)
{
	if (b->sign)
		printf("-");
	for (int i = 0; i < b->blocks_allocated; i++)
	{
		for (int j = 0; j < b->block[i].leading_zeros; j++)
			printf("0");
		//printf("(%d)", b->block[i].leading_zeros);
		printf("%llu ", b->block[i].val);
	}
	printf("\n");
}

// Currently for debugging
char* bigdouble_str(BigDouble* b)
{
	char* str = malloc(b->blocks_allocated * DIGITS_PER_BLOCK * sizeof(char) + b->sign); // b->sign == 1 if num is negative
	if (b->sign)
		str[0] = '-';
	for (int i = 0; i < b->blocks_allocated; i++) {
		// Append leading 0's
		for (int j = 0; j < b->block[i].leading_zeros; j++)
			str[i*DIGITS_PER_BLOCK + b->sign + j] = '0';
		sprintf(str+i*DIGITS_PER_BLOCK + b->sign + b->block[i].leading_zeros, "%llu", b->block[i].val);
	}
	return str;
}



// TODO: error checking
int destroy_bigdouble(BigDouble* b)
{
	for (int i = 0; i < b->blocks_allocated; i++)
		free(&b->block[i]);
	return 1;
}

int bigdouble_inc(BigDouble* b)
{
	// Go backwards through the blocks
	for (int i = b->blocks_allocated; i >= 0; i--) {
		// If the current block overflows, we need to modify the next block
		if (b->block[i].val == MAX_BLOCK_VAL)
			continue;
		else
			b->block[i].val += 1;
	}
	return 1;
}

int bigdouble_dec(BigDouble* b)
{
	// Go backwards through the blocks
	for (int i = b->blocks_allocated; i >= 0; i--) {
		// If the current block overflows, we need to modify the next block
		if (b->block[i].val == 0)
			continue;
		else
			b->block[i].val -= 1;
	}
	return 1;
}

// Adds b2 to b1 where the result is placed in b1... calls for resizing if required
int bigdouble_add(BigDouble* b1, BigDouble* b2)
{

}


#endif /* BIG_DOUBLE_H */