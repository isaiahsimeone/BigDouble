# BigDouble
A single header 'big double' implementation for C. Currently, it supports addition, subtraction and comparison of numbers of any size (dependant on memory). Currently, an infinite mantissa (or fractional part) is supported for addition, subtraction and comparison. Multiplication, division and bitwise operations are yet to be implemented

### Why not use GNU MP? (The GNU Multiple Precision Arithmetic Library)
[GMP](https://gmplib.org/) is far more polished, and performs better than my BigDouble implementation. However, I created this project to be a single header solution - for 'quick and dirty' testing, and most importantly: to learn.

## Example Usage

### Initialisation / Destruction

```c
#include "bigdouble.h"

BigDouble* a_big_number0 = init_bigdouble("100000000000000000000000000000000000000000000000000000000000000");
BigDouble* a_big_number1 = init_bigdouble("-0.2149142135654324123521621462346234514982093390125901235093883732");
BigDouble* a_big_number2 = init_bigdouble("-134234872853791235925398124791.21491421356598209339012373264632");

/* Some operations */

destroy_bigdouble(a_big_number0);
destroy_bigdouble(a_big_number1);
destroy_bigdouble(a_big_number2);
```
### Addition / Subtraction / Printing

```c
#include "bigdouble.h"

BigDouble* a = init_bigdouble("75912375981237592.756454645543");
BigDouble* b = init_bigdouble("34677347342345723.23547621351243422291");
BigDouble* c = init_bigdouble("1.2");

bigdouble_add(a, b); /* Result stored in a */
bigdouble_sub(c, a); /* c = c - (a + b) */

printf("%s\n", bigdouble_str(a)); /* 110589723323583315.99193085905543422291 */
printf("%s\n", bigdouble_str(c)); /*-110589723323583314.79193085905543422291 */

```
### Comparison

```c
#include "bigdouble.h"

BigDouble* a = init_bigdouble("-23413.432942");
BigDouble* b = init_bigdouble("6869859.254");
BigDouble* c = init_bigdouble("-1999.25400000");

printf("%d\n", bigdouble_cmp(a, ">", b));   /* 0 */
printf("%d\n", bigdouble_cmp(a, "==", b));  /* 0 */
printf("%d\n", bigdouble_cmp(a, "!=", b));  /* 1 */
printf("%d\n", bigdouble_cmp(a, "<=", c));  /* 1 */
printf("%d\n", bigdouble_cmp(a, "<", c));   /* 1 */
printf("%d\n", bigdouble_cmp(b, ">=", c));  /* 1 */

```




## Testing
Tests can be run by executing `chmod +x make_tests.sh && ./make_tests.sh`

## TODO

| Task | With infinite* integers | With infinite* mantissa |
| ---- | ------------- | --------------- |
| Initialisation | DONE | DONE |
| Stringify/print | DONE | DONE |
| Addition | DONE  | DONE  |
| Subtraction | DONE | DONE |
| Comparison | DONE | DONE |
| Resizing | DONE | DONE |
| Negative Values | DONE | DONE |
| Multiplication | In progress | In progress |
| Division | In progress | In progress |
| Bitwise Ops | In progress | In progress |
| Different Bases | In progress | In progress |

*- Bounded by memory

