#include <stdio.h>
#include <stdlib.h>
#include <check.h>
#include "bigdouble.h"

#define STRINGIFY(x) #x

START_TEST(test_init1)
{
	BigDouble* b = init_bigdouble("12345678910111213141516171819202122232425262728293031323334353637383940");
	ck_assert_str_eq(bigdouble_str(b), "12345678910111213141516171819202122232425262728293031323334353637383940");

}
END_TEST

START_TEST(test_init2)
{
	BigDouble* b = init_bigdouble("1");
	ck_assert_str_eq(bigdouble_str(b), "1");

}
END_TEST

START_TEST(test_init3)
{
	BigDouble* b = init_bigdouble("0");
	ck_assert_str_eq(bigdouble_str(b), "0");
}
END_TEST

START_TEST(test_init4)
{
	BigDouble* b = init_bigdouble("9999999999999999999");
	ck_assert_str_eq(bigdouble_str(b), "9999999999999999999");
}
END_TEST

START_TEST(test_init5)
{
	BigDouble* b = init_bigdouble("9");
	ck_assert_str_eq(bigdouble_str(b), "9");
}
END_TEST

START_TEST(test_init6)
{
	BigDouble* b = init_bigdouble("-1");
	ck_assert_str_eq(bigdouble_str(b), "-1");
}
END_TEST

START_TEST(test_init7)
{
	BigDouble* b = init_bigdouble("12345000");
	ck_assert_str_eq(bigdouble_str(b), "12345000");

}
END_TEST

START_TEST(test_init8)
{
	BigDouble* b = init_bigdouble("0000");
	ck_assert_str_eq(bigdouble_str(b), "0");

}
END_TEST

START_TEST(test_init9)
{
	BigDouble* b = init_bigdouble("-123456789");
	ck_assert_str_eq(bigdouble_str(b), "-123456789");

}
END_TEST

START_TEST(test_init10)
{
	BigDouble* b = init_bigdouble("-999999999999999999");
	ck_assert_str_eq(bigdouble_str(b), "-999999999999999999");

}
END_TEST

START_TEST(test_init11)
{
	BigDouble* b = init_bigdouble("-12345678910111213141516171819202122232425262728293031323334353637383940");
	ck_assert_str_eq(bigdouble_str(b), "-12345678910111213141516171819202122232425262728293031323334353637383940");

}
END_TEST

START_TEST(test_init12)
{
	BigDouble* b = init_bigdouble("12345678910111213141516171819202122232425262728293031323334353637383940123456789101112131415161718192021222324252627282930313233343536373839401234567891011121314151617181920212223242526272829303132333435363738394012345678910111213141516171819202122232425262728293031323334353637383940");
	ck_assert_str_eq(bigdouble_str(b), "12345678910111213141516171819202122232425262728293031323334353637383940123456789101112131415161718192021222324252627282930313233343536373839401234567891011121314151617181920212223242526272829303132333435363738394012345678910111213141516171819202122232425262728293031323334353637383940");
}
END_TEST

START_TEST(test_init13)
{
	BigDouble* b = init_bigdouble("123456789112345678901");
	ck_assert_str_eq(bigdouble_str(b), "123456789112345678901");
}
END_TEST

START_TEST(test_init14)
{
	BigDouble* b = init_bigdouble("1234567891234567890");
	ck_assert_str_eq(bigdouble_str(b), "1234567891234567890");

}
END_TEST

Suite* suite_1(void)
{
	Suite* s = suite_create("Initialisation");

	/* Initialising BigDouble */

	TCase *tc1, *tc2, *tc3, *tc4, *tc5, *tc6, *tc7,
		*tc8, *tc9, *tc10, *tc11, *tc12, *tc13,
		*tc14;

	tc1 = tcase_create("test_init1");
	tc2 = tcase_create("test_init2");
	tc3 = tcase_create("test_init3");
	tc4 = tcase_create("test_init4");
	tc5 = tcase_create("test_init5");
	tc6 = tcase_create("test_init6");
	tc7 = tcase_create("test_init7");
	tc8 = tcase_create("test_init8");
	tc9 = tcase_create("test_init9");
	tc10 = tcase_create("test_init10");
	tc11 = tcase_create("test_init11");
	tc12 = tcase_create("test_init12");
	tc13 = tcase_create("test_init13");
	tc14 = tcase_create("test_init14");

	tcase_add_test(tc1, test_init1);
	tcase_add_test(tc2, test_init2);
	tcase_add_test(tc3, test_init3);
	tcase_add_test(tc4, test_init4);
	tcase_add_test(tc5, test_init5);
	tcase_add_test(tc6, test_init6);
	tcase_add_test(tc7, test_init7);
	tcase_add_test(tc8, test_init8);
	tcase_add_test(tc9, test_init9);
	tcase_add_test(tc10, test_init10);
	tcase_add_test(tc11, test_init11);
	tcase_add_test(tc12, test_init12);
	tcase_add_test(tc13, test_init13);
	tcase_add_test(tc14, test_init14);

	suite_add_tcase(s, tc1);
	suite_add_tcase(s, tc2);
	suite_add_tcase(s, tc3);
	suite_add_tcase(s, tc4);
	suite_add_tcase(s, tc5);
	suite_add_tcase(s, tc6);
	suite_add_tcase(s, tc7);
	suite_add_tcase(s, tc8);
	suite_add_tcase(s, tc9);
	suite_add_tcase(s, tc10);
	suite_add_tcase(s, tc11);
	suite_add_tcase(s, tc12);
	suite_add_tcase(s, tc13);
	suite_add_tcase(s, tc14);

	return s;
}



int main(int argc, char** argv)
{
	int failed;
	SRunner* sr;

	Suite* s1 = suite_1();

	sr = srunner_create(s1);

	srunner_run_all(sr, CK_NORMAL);
	failed = srunner_ntests_failed(sr);
	srunner_free(sr);

	return failed;

}