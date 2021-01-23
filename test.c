#include <stdio.h>
#include <stdlib.h>
#include <check.h>
#include "bigdouble.h"
#include "test.h"

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

START_TEST(test_init15)
{
	BigDouble* b = init_bigdouble("5");
	ck_assert_str_eq(bigdouble_str(b), "5");

}
END_TEST

START_TEST(test_init16)
{
	BigDouble* b = init_bigdouble("000000001");
	ck_assert_str_eq(bigdouble_str(b), "1");

}
END_TEST

START_TEST(test_init17)
{
	BigDouble* b = init_bigdouble("11111111111111111111111111111111111111111111111111111111111111111111111111");
	ck_assert_str_eq(bigdouble_str(b), "11111111111111111111111111111111111111111111111111111111111111111111111111");

}
END_TEST

START_TEST(test_init18)
{
	BigDouble* b = init_bigdouble("5454545454544444445545523452345234523452345234512513462457345462457348734");
	ck_assert_str_eq(bigdouble_str(b), "5454545454544444445545523452345234523452345234512513462457345462457348734");
}
END_TEST

START_TEST(test_init19)
{
	BigDouble* b = init_bigdouble("9999999999999999990");
	ck_assert_str_eq(bigdouble_str(b), "9999999999999999990");
}
END_TEST

START_TEST(test_init20)
{
	BigDouble* b = init_bigdouble("9999999990999999999");
	ck_assert_str_eq(bigdouble_str(b), "9999999990999999999");
}
END_TEST

START_TEST(test_init21)
{
	BigDouble* b = init_bigdouble("-0");
	ck_assert_str_eq(bigdouble_str(b), "0");
}
END_TEST

START_TEST(test_init22)
{
	BigDouble* b = init_bigdouble("-00000");
	ck_assert_str_eq(bigdouble_str(b), "0");
}
END_TEST

START_TEST(test_init23)
{
	BigDouble* b = init_bigdouble(bigrandom1);
	ck_assert_str_eq(bigdouble_str(b), bigrandom1);
}
END_TEST

START_TEST(test_init24)
{
	BigDouble* b = init_bigdouble("1000000");
	ck_assert_str_eq(bigdouble_str(b), "1000000");

}
END_TEST

START_TEST(test_init25)
{
	BigDouble* a = init_bigdouble("9.01814018822");
	ck_assert_str_eq(bigdouble_str(a), "9.01814018822");
}

START_TEST(test_init26)
{
	BigDouble* a = init_bigdouble("-49.1212857079");
	ck_assert_str_eq(bigdouble_str(a), "-49.1212857079");
}

START_TEST(test_init27)
{
	BigDouble* a = init_bigdouble("-42.6110823488");
	ck_assert_str_eq(bigdouble_str(a), "-42.6110823488");
}

START_TEST(test_init28)
{
	BigDouble* a = init_bigdouble("-24.9822160784");
	ck_assert_str_eq(bigdouble_str(a), "-24.9822160784");
}

START_TEST(test_init29)
{
	BigDouble* a = init_bigdouble("86.6010061106");
	ck_assert_str_eq(bigdouble_str(a), "86.6010061106");
}

START_TEST(test_init30)
{
	BigDouble* a = init_bigdouble("-8.05455485634");
	ck_assert_str_eq(bigdouble_str(a), "-8.05455485634");
}

START_TEST(test_init31)
{
	BigDouble* a = init_bigdouble("-20.9143671641");
	ck_assert_str_eq(bigdouble_str(a), "-20.9143671641");
}

START_TEST(test_init32)
{
	BigDouble* a = init_bigdouble("94.2135498798");
	ck_assert_str_eq(bigdouble_str(a), "94.2135498798");
}

START_TEST(test_init33)
{
	BigDouble* a = init_bigdouble("75.6831856827");
	ck_assert_str_eq(bigdouble_str(a), "75.6831856827");
}

START_TEST(test_init34)
{
	BigDouble* a = init_bigdouble("11.627793707762779370776277937077627793707762779370776277937077");
	ck_assert_str_eq(bigdouble_str(a), "11.627793707762779370776277937077627793707762779370776277937077");
}

START_TEST(test_init35)
{
	BigDouble* a = init_bigdouble("-7.999999999999999999999999999999999999999999999999");
	ck_assert_str_eq(bigdouble_str(a), "-7.999999999999999999999999999999999999999999999999");
}

START_TEST(test_init36)
{
	BigDouble* a = init_bigdouble("65.7264673129");
	ck_assert_str_eq(bigdouble_str(a), "65.7264673129");
}

START_TEST(test_init37)
{
	BigDouble* a = init_bigdouble("15.897981758");
	ck_assert_str_eq(bigdouble_str(a), "15.897981758");
}

START_TEST(test_init38)
{
	BigDouble* a = init_bigdouble("-51.4190374755");
	ck_assert_str_eq(bigdouble_str(a), "-51.4190374755");
}

START_TEST(test_init39)
{
	BigDouble* a = init_bigdouble("60.007215653");
	ck_assert_str_eq(bigdouble_str(a), "60.007215653");
}

START_TEST(test_init40)
{
	BigDouble* a = init_bigdouble("9.82707386697");
	ck_assert_str_eq(bigdouble_str(a), "9.82707386697");
}

Suite* suite_1(void)
{
	Suite* s = suite_create("Initialisation");

	/* Initialising BigDouble */

	TCase *tci1, *tci2, *tci3, *tci4, *tci5, *tci6, *tci7,
		*tci8, *tci9, *tci10, *tci11, *tci12, *tci13,
		*tci14, *tci15, *tci16, *tci17, *tci18, *tci19,
		*tci20, *tci21, *tci22, *tci23, *tci24, *tci25, 
		*tci26, *tci27, *tci28, *tci29, *tci30, *tci31, 
		*tci32, *tci33, *tci34, *tci35, *tci36, *tci37, 
		*tci38, *tci39, *tci40;

	tci1 = tcase_create("test_init1");
	tci2 = tcase_create("test_init2");
	tci3 = tcase_create("test_init3");
	tci4 = tcase_create("test_init4");
	tci5 = tcase_create("test_init5");
	tci6 = tcase_create("test_init6");
	tci7 = tcase_create("test_init7");
	tci8 = tcase_create("test_init8");
	tci9 = tcase_create("test_init9");
	tci10 = tcase_create("test_init10");
	tci11 = tcase_create("test_init11");
	tci12 = tcase_create("test_init12");
	tci13 = tcase_create("test_init13");
	tci14 = tcase_create("test_init14");
	tci15 = tcase_create("test_init15");
	tci16 = tcase_create("test_init16");
	tci17 = tcase_create("test_init17");
	tci18 = tcase_create("test_init18");
	tci19 = tcase_create("test_init19");
	tci20 = tcase_create("test_init20");
	tci21 = tcase_create("test_init21");
	tci22 = tcase_create("test_init22");
	tci23 = tcase_create("test_init23");
	tci24 = tcase_create("test_init24");
	tci25 = tcase_create("test_init25");
	tci26 = tcase_create("test_init26");
	tci27 = tcase_create("test_init27");
	tci28 = tcase_create("test_init28");
	tci29 = tcase_create("test_init29");
	tci30 = tcase_create("test_init30");
	tci31 = tcase_create("test_init31");
	tci32 = tcase_create("test_init32");
	tci33 = tcase_create("test_init33");
	tci34 = tcase_create("test_init34");
	tci35 = tcase_create("test_init35");
	tci36 = tcase_create("test_init36");
	tci37 = tcase_create("test_init37");
	tci38 = tcase_create("test_init38");
	tci39 = tcase_create("test_init39");
	tci40 = tcase_create("test_init40");

	tcase_add_test(tci1, test_init1);
	tcase_add_test(tci2, test_init2);
	tcase_add_test(tci3, test_init3);
	tcase_add_test(tci4, test_init4);
	tcase_add_test(tci5, test_init5);
	tcase_add_test(tci6, test_init6);
	tcase_add_test(tci7, test_init7);
	tcase_add_test(tci8, test_init8);
	tcase_add_test(tci9, test_init9);
	tcase_add_test(tci10, test_init10);
	tcase_add_test(tci11, test_init11);
	tcase_add_test(tci12, test_init12);
	tcase_add_test(tci13, test_init13);
	tcase_add_test(tci14, test_init14);
	tcase_add_test(tci15, test_init15);
	tcase_add_test(tci16, test_init16);
	tcase_add_test(tci17, test_init17);
	tcase_add_test(tci18, test_init18);
	tcase_add_test(tci19, test_init19);
	tcase_add_test(tci20, test_init20);
	tcase_add_test(tci21, test_init21);
	tcase_add_test(tci22, test_init22);
	tcase_add_test(tci23, test_init23);
	tcase_add_test(tci24, test_init24);
	tcase_add_test(tci25, test_init25);
	tcase_add_test(tci26, test_init26);
	tcase_add_test(tci27, test_init27);
	tcase_add_test(tci28, test_init28);
	tcase_add_test(tci29, test_init29);
	tcase_add_test(tci30, test_init30);
	tcase_add_test(tci31, test_init31);
	tcase_add_test(tci32, test_init32);
	tcase_add_test(tci33, test_init33);
	tcase_add_test(tci34, test_init34);
	tcase_add_test(tci35, test_init35);
	tcase_add_test(tci36, test_init36);
	tcase_add_test(tci37, test_init37);
	tcase_add_test(tci38, test_init38);
	tcase_add_test(tci39, test_init39);
	tcase_add_test(tci40, test_init40);

	suite_add_tcase(s, tci1);
	suite_add_tcase(s, tci2);
	suite_add_tcase(s, tci3);
	suite_add_tcase(s, tci4);
	suite_add_tcase(s, tci5);
	suite_add_tcase(s, tci6);
	suite_add_tcase(s, tci7);
	suite_add_tcase(s, tci8);
	suite_add_tcase(s, tci9);
	suite_add_tcase(s, tci10);
	suite_add_tcase(s, tci11);
	suite_add_tcase(s, tci12);
	suite_add_tcase(s, tci13);
	suite_add_tcase(s, tci14);
	suite_add_tcase(s, tci15);
	suite_add_tcase(s, tci16);
	suite_add_tcase(s, tci17);
	suite_add_tcase(s, tci18);
	suite_add_tcase(s, tci19);
	suite_add_tcase(s, tci20);
	suite_add_tcase(s, tci21);
	suite_add_tcase(s, tci22);
	suite_add_tcase(s, tci23);
	suite_add_tcase(s, tci24);
	suite_add_tcase(s, tci25);
	suite_add_tcase(s, tci26);
	suite_add_tcase(s, tci27);
	suite_add_tcase(s, tci28);
	suite_add_tcase(s, tci29);
	suite_add_tcase(s, tci30);
	suite_add_tcase(s, tci31);
	suite_add_tcase(s, tci32);
	suite_add_tcase(s, tci33);
	suite_add_tcase(s, tci34);
	suite_add_tcase(s, tci35);
	suite_add_tcase(s, tci36);
	suite_add_tcase(s, tci37);
	suite_add_tcase(s, tci38);
	suite_add_tcase(s, tci39);
	suite_add_tcase(s, tci40);

	return s;
}

START_TEST(test_inc1)
{
	BigDouble* b = init_bigdouble("1");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "2");
}
END_TEST

START_TEST(test_inc2)
{
	BigDouble* b = init_bigdouble("12345");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "12346");
}
END_TEST

START_TEST(test_inc3)
{
	BigDouble* b = init_bigdouble("0");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "1");
}
END_TEST

START_TEST(test_inc4)
{
	BigDouble* b = init_bigdouble("-0");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "1");
}
END_TEST

START_TEST(test_inc5)
{
	BigDouble* b = init_bigdouble("9");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "10");
}
END_TEST

START_TEST(test_inc6)
{
	BigDouble* b = init_bigdouble("99");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "100");
}
END_TEST

START_TEST(test_inc7)
{
	BigDouble* b = init_bigdouble("9999999999");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "10000000000");
}
END_TEST

START_TEST(test_inc8)
{
	BigDouble* b = init_bigdouble("999999999999999999999999999999");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "1000000000000000000000000000000");
}
END_TEST

START_TEST(test_inc9)
{
	BigDouble* b = init_bigdouble("500");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "501");
}
END_TEST

START_TEST(test_inc10)
{
	BigDouble* b = init_bigdouble("997");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "998");
}
END_TEST

START_TEST(test_inc11)
{
	BigDouble* b = init_bigdouble("999");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "1000");
}
END_TEST

START_TEST(test_inc12)
{
	BigDouble* b = init_bigdouble("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999899999");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999900000");
}
END_TEST

START_TEST(test_inc13)
{
	BigDouble* b = init_bigdouble("119");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "120");
}
END_TEST

START_TEST(test_inc14)
{
	BigDouble* b = init_bigdouble("98989898989");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "98989898990");
}
END_TEST

START_TEST(test_inc15)
{
	BigDouble* b = init_bigdouble("-5");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "-4");
}
END_TEST

START_TEST(test_inc16)
{
	BigDouble* b1 = init_bigdouble("1");
	BigDouble* b2 = init_bigdouble("2");
	BigDouble* b3 = init_bigdouble("3");
	BigDouble* b4 = init_bigdouble("4");
	BigDouble* b5 = init_bigdouble("5");
	BigDouble* b6 = init_bigdouble("6");
	BigDouble* b7 = init_bigdouble("7");
	BigDouble* b8 = init_bigdouble("8");
	BigDouble* b9 = init_bigdouble("9");
	BigDouble* b10 = init_bigdouble("10");
	BigDouble* b11 = init_bigdouble("11");
	BigDouble* b12 = init_bigdouble("12");
	BigDouble* b13 = init_bigdouble("13");
	BigDouble* b14 = init_bigdouble("14");
	BigDouble* b15 = init_bigdouble("15");
	BigDouble* b16 = init_bigdouble("16");
	BigDouble* b17 = init_bigdouble("17");
	BigDouble* b18 = init_bigdouble("18");
	BigDouble* b19 = init_bigdouble("19");

	bigdouble_inc(b1);
	bigdouble_inc(b2);
	bigdouble_inc(b3);
	bigdouble_inc(b4);
	bigdouble_inc(b5);
	bigdouble_inc(b6);
	bigdouble_inc(b7);
	bigdouble_inc(b8);
	bigdouble_inc(b9);
	bigdouble_inc(b10);
	bigdouble_inc(b11);
	bigdouble_inc(b12);
	bigdouble_inc(b13);
	bigdouble_inc(b14);
	bigdouble_inc(b15);
	bigdouble_inc(b16);
	bigdouble_inc(b17);
	bigdouble_inc(b18);
	bigdouble_inc(b19);

	ck_assert_str_eq(bigdouble_str(b1), "2");
	ck_assert_str_eq(bigdouble_str(b2), "3");
	ck_assert_str_eq(bigdouble_str(b3), "4");
	ck_assert_str_eq(bigdouble_str(b4), "5");
	ck_assert_str_eq(bigdouble_str(b5), "6");
	ck_assert_str_eq(bigdouble_str(b6), "7");
	ck_assert_str_eq(bigdouble_str(b7), "8");
	ck_assert_str_eq(bigdouble_str(b8), "9");
	ck_assert_str_eq(bigdouble_str(b9), "10");
	ck_assert_str_eq(bigdouble_str(b10), "11");
	ck_assert_str_eq(bigdouble_str(b11), "12");
	ck_assert_str_eq(bigdouble_str(b12), "13");
	ck_assert_str_eq(bigdouble_str(b13), "14");
	ck_assert_str_eq(bigdouble_str(b14), "15");
	ck_assert_str_eq(bigdouble_str(b15), "16");
	ck_assert_str_eq(bigdouble_str(b16), "17");
	ck_assert_str_eq(bigdouble_str(b17), "18");
	ck_assert_str_eq(bigdouble_str(b18), "19");
	ck_assert_str_eq(bigdouble_str(b19), "20");
}
END_TEST

START_TEST(test_inc17)
{
	BigDouble* b0 = init_bigdouble("0");
	BigDouble* b1 = init_bigdouble("-1");
	BigDouble* b2 = init_bigdouble("-2");
	BigDouble* b3 = init_bigdouble("-3");
	BigDouble* b4 = init_bigdouble("-4");
	BigDouble* b5 = init_bigdouble("-5");
	BigDouble* b6 = init_bigdouble("-6");
	BigDouble* b7 = init_bigdouble("-7");
	BigDouble* b8 = init_bigdouble("-8");
	BigDouble* b9 = init_bigdouble("-9");
	BigDouble* b10 = init_bigdouble("-10");
	BigDouble* b11 = init_bigdouble("-11");
	BigDouble* b12 = init_bigdouble("-12");
	BigDouble* b13 = init_bigdouble("-13");
	BigDouble* b14 = init_bigdouble("-14");
	BigDouble* b15 = init_bigdouble("-15");
	BigDouble* b16 = init_bigdouble("-16");
	BigDouble* b17 = init_bigdouble("-17");
	BigDouble* b18 = init_bigdouble("-18");
	BigDouble* b19 = init_bigdouble("-19");

	bigdouble_inc(b0);
	bigdouble_inc(b1);
	bigdouble_inc(b2);
	bigdouble_inc(b3);
	bigdouble_inc(b4);
	bigdouble_inc(b5);
	bigdouble_inc(b6);
	bigdouble_inc(b7);
	bigdouble_inc(b8);
	bigdouble_inc(b9);
	bigdouble_inc(b10);
	bigdouble_inc(b11);
	bigdouble_inc(b12);
	bigdouble_inc(b13);
	bigdouble_inc(b14);
	bigdouble_inc(b15);
	bigdouble_inc(b16);
	bigdouble_inc(b17);
	bigdouble_inc(b18);
	bigdouble_inc(b19);

	ck_assert_str_eq(bigdouble_str(b0), "1");
	ck_assert_str_eq(bigdouble_str(b1), "0");
	ck_assert_str_eq(bigdouble_str(b2), "-1");
	ck_assert_str_eq(bigdouble_str(b3), "-2");
	ck_assert_str_eq(bigdouble_str(b4), "-3");
	ck_assert_str_eq(bigdouble_str(b5), "-4");
	ck_assert_str_eq(bigdouble_str(b6), "-5");
	ck_assert_str_eq(bigdouble_str(b7), "-6");
	ck_assert_str_eq(bigdouble_str(b8), "-7");
	ck_assert_str_eq(bigdouble_str(b9), "-8");
	ck_assert_str_eq(bigdouble_str(b10), "-9");
	ck_assert_str_eq(bigdouble_str(b11), "-10");
	ck_assert_str_eq(bigdouble_str(b12), "-11");
	ck_assert_str_eq(bigdouble_str(b13), "-12");
	ck_assert_str_eq(bigdouble_str(b14), "-13");
	ck_assert_str_eq(bigdouble_str(b15), "-14");
	ck_assert_str_eq(bigdouble_str(b16), "-15");
	ck_assert_str_eq(bigdouble_str(b17), "-16");
	ck_assert_str_eq(bigdouble_str(b18), "-17");
	ck_assert_str_eq(bigdouble_str(b19), "-18");
}
END_TEST


/* Decrement */

START_TEST(test_dec1)
{
	BigDouble* b = init_bigdouble("2");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "1");
}
END_TEST

START_TEST(test_dec2)
{
	BigDouble* b = init_bigdouble("12346");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "12345");
}
END_TEST

START_TEST(test_dec3)
{
	BigDouble* b = init_bigdouble("1001");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "1000");
}
END_TEST

START_TEST(test_dec4)
{
	BigDouble* b = init_bigdouble("1");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "0");
}
END_TEST

START_TEST(test_dec5)
{
	BigDouble* b = init_bigdouble("10");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "9");
}
END_TEST

START_TEST(test_dec6)
{
	BigDouble* b = init_bigdouble("100");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "99");
}
END_TEST

START_TEST(test_dec7)
{
	BigDouble* b = init_bigdouble("10000000000");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "9999999999");
}
END_TEST

START_TEST(test_dec8)
{
	BigDouble* b = init_bigdouble("1000000000000000000000000000000");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "999999999999999999999999999999");
}
END_TEST

START_TEST(test_dec9)
{
	BigDouble* b = init_bigdouble("501");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "500");
}
END_TEST

START_TEST(test_dec10)
{
	BigDouble* b = init_bigdouble("998");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "997");
}
END_TEST

START_TEST(test_dec11)
{
	BigDouble* b = init_bigdouble("1000");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "999");
}
END_TEST

START_TEST(test_dec12)
{
	BigDouble* b = init_bigdouble("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999899999");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999899998");
}
END_TEST

START_TEST(test_dec13)
{
	BigDouble* b = init_bigdouble("120");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "119");
}
END_TEST

START_TEST(test_dec14)
{
	BigDouble* b = init_bigdouble("98989898990");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "98989898989");
}
END_TEST

START_TEST(test_dec15)
{
	BigDouble* b = init_bigdouble("0");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "-1");
}
END_TEST

START_TEST(test_dec16)
{
	BigDouble* b = init_bigdouble("5");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "4");
}
END_TEST

START_TEST(test_dec17)
{
	BigDouble* b1 = init_bigdouble("1");
	BigDouble* b2 = init_bigdouble("2");
	BigDouble* b3 = init_bigdouble("3");
	BigDouble* b4 = init_bigdouble("4");
	BigDouble* b5 = init_bigdouble("5");
	BigDouble* b6 = init_bigdouble("6");
	BigDouble* b7 = init_bigdouble("7");
	BigDouble* b8 = init_bigdouble("8");
	BigDouble* b9 = init_bigdouble("9");
	BigDouble* b10 = init_bigdouble("10");
	BigDouble* b11 = init_bigdouble("11");
	BigDouble* b12 = init_bigdouble("12");
	BigDouble* b13 = init_bigdouble("13");
	BigDouble* b14 = init_bigdouble("14");
	BigDouble* b15 = init_bigdouble("15");
	BigDouble* b16 = init_bigdouble("16");
	BigDouble* b17 = init_bigdouble("17");
	BigDouble* b18 = init_bigdouble("18");
	BigDouble* b19 = init_bigdouble("19");

	bigdouble_dec(b1);
	bigdouble_dec(b2);
	bigdouble_dec(b3);
	bigdouble_dec(b4);
	bigdouble_dec(b5);
	bigdouble_dec(b6);
	bigdouble_dec(b7);
	bigdouble_dec(b8);
	bigdouble_dec(b9);
	bigdouble_dec(b10);
	bigdouble_dec(b11);
	bigdouble_dec(b12);
	bigdouble_dec(b13);
	bigdouble_dec(b14);
	bigdouble_dec(b15);
	bigdouble_dec(b16);
	bigdouble_dec(b17);
	bigdouble_dec(b18);
	bigdouble_dec(b19);

	ck_assert_str_eq(bigdouble_str(b1), "0");
	ck_assert_str_eq(bigdouble_str(b2), "1");
	ck_assert_str_eq(bigdouble_str(b3), "2");
	ck_assert_str_eq(bigdouble_str(b4), "3");
	ck_assert_str_eq(bigdouble_str(b5), "4");
	ck_assert_str_eq(bigdouble_str(b6), "5");
	ck_assert_str_eq(bigdouble_str(b7), "6");
	ck_assert_str_eq(bigdouble_str(b8), "7");
	ck_assert_str_eq(bigdouble_str(b9), "8");
	ck_assert_str_eq(bigdouble_str(b10), "9");
	ck_assert_str_eq(bigdouble_str(b11), "10");
	ck_assert_str_eq(bigdouble_str(b12), "11");
	ck_assert_str_eq(bigdouble_str(b13), "12");
	ck_assert_str_eq(bigdouble_str(b14), "13");
	ck_assert_str_eq(bigdouble_str(b15), "14");
	ck_assert_str_eq(bigdouble_str(b16), "15");
	ck_assert_str_eq(bigdouble_str(b17), "16");
	ck_assert_str_eq(bigdouble_str(b18), "17");
	ck_assert_str_eq(bigdouble_str(b19), "18");
}
END_TEST

START_TEST(test_dec18)
{
	BigDouble* b0 = init_bigdouble("0");
	BigDouble* b1 = init_bigdouble("-1");
	BigDouble* b2 = init_bigdouble("-2");
	BigDouble* b3 = init_bigdouble("-3");
	BigDouble* b4 = init_bigdouble("-4");
	BigDouble* b5 = init_bigdouble("-5");
	BigDouble* b6 = init_bigdouble("-6");
	BigDouble* b7 = init_bigdouble("-7");
	BigDouble* b8 = init_bigdouble("-8");
	BigDouble* b9 = init_bigdouble("-9");
	BigDouble* b10 = init_bigdouble("-10");
	BigDouble* b11 = init_bigdouble("-11");
	BigDouble* b12 = init_bigdouble("-12");
	BigDouble* b13 = init_bigdouble("-13");
	BigDouble* b14 = init_bigdouble("-14");
	BigDouble* b15 = init_bigdouble("-15");
	BigDouble* b16 = init_bigdouble("-16");
	BigDouble* b17 = init_bigdouble("-17");
	BigDouble* b18 = init_bigdouble("-18");
	BigDouble* b19 = init_bigdouble("-19");

	bigdouble_dec(b0);
	bigdouble_dec(b1);
	bigdouble_dec(b2);
	bigdouble_dec(b3);
	bigdouble_dec(b4);
	bigdouble_dec(b5);
	bigdouble_dec(b6);
	bigdouble_dec(b7);
	bigdouble_dec(b8);
	bigdouble_dec(b9);
	bigdouble_dec(b10);
	bigdouble_dec(b11);
	bigdouble_dec(b12);
	bigdouble_dec(b13);
	bigdouble_dec(b14);
	bigdouble_dec(b15);
	bigdouble_dec(b16);
	bigdouble_dec(b17);
	bigdouble_dec(b18);
	bigdouble_dec(b19);

	ck_assert_str_eq(bigdouble_str(b0), "-1");
	ck_assert_str_eq(bigdouble_str(b1), "-2");
	ck_assert_str_eq(bigdouble_str(b2), "-3");
	ck_assert_str_eq(bigdouble_str(b3), "-4");
	ck_assert_str_eq(bigdouble_str(b4), "-5");
	ck_assert_str_eq(bigdouble_str(b5), "-6");
	ck_assert_str_eq(bigdouble_str(b6), "-7");
	ck_assert_str_eq(bigdouble_str(b7), "-8");
	ck_assert_str_eq(bigdouble_str(b8), "-9");
	ck_assert_str_eq(bigdouble_str(b9), "-10");
	ck_assert_str_eq(bigdouble_str(b10), "-11");
	ck_assert_str_eq(bigdouble_str(b11), "-12");
	ck_assert_str_eq(bigdouble_str(b12), "-13");
	ck_assert_str_eq(bigdouble_str(b13), "-14");
	ck_assert_str_eq(bigdouble_str(b14), "-15");
	ck_assert_str_eq(bigdouble_str(b15), "-16");
	ck_assert_str_eq(bigdouble_str(b16), "-17");
	ck_assert_str_eq(bigdouble_str(b17), "-18");
	ck_assert_str_eq(bigdouble_str(b18), "-19");
	ck_assert_str_eq(bigdouble_str(b19), "-20");
}
END_TEST

START_TEST(test_dec19)
{
	BigDouble* b = init_bigdouble("-1");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "-2");
}
END_TEST

Suite* suite_2(void)
{
	Suite* s = suite_create("Increment/Decrement");

	/* Incrementing & Decrementing BigDouble */

	TCase *tci1, *tci2, *tci3, *tci4, *tci5,
		*tci6, *tci7, *tci8, *tci9, *tci10,
		*tci11, *tci12, *tci13, *tci14, *tci15,
		*tci16, *tci17;
	TCase *tcd1, *tcd2, *tcd3, *tcd4, *tcd5,
		*tcd6, *tcd7, *tcd8, *tcd9, *tcd10,
		*tcd11, *tcd12, *tcd13, *tcd14, *tcd15,
		*tcd16, *tcd17, *tcd18, *tcd19;

	tci1 = tcase_create("test_inc1");
	tci2 = tcase_create("test_inc2");
	tci3 = tcase_create("test_inc3");
	tci4 = tcase_create("test_inc4");
	tci5 = tcase_create("test_inc5");
	tci6 = tcase_create("test_inc6");
	tci7 = tcase_create("test_inc7");
	tci8 = tcase_create("test_inc8");
	tci9 = tcase_create("test_inc9");
	tci10 = tcase_create("test_inc10");
	tci11 = tcase_create("test_inc11");
	tci12 = tcase_create("test_inc12");
	tci13 = tcase_create("test_inc13");
	tci14 = tcase_create("test_inc14");
	tci15 = tcase_create("test_inc15");
	tci16 = tcase_create("test_inc16");
	tci17 = tcase_create("test_inc17");
	tcd1 = tcase_create("test_dec1");
	tcd2 = tcase_create("test_dec2");
	tcd3 = tcase_create("test_dec3");
	tcd4 = tcase_create("test_dec4");
	tcd5 = tcase_create("test_dec5");
	tcd6 = tcase_create("test_dec6");
	tcd7 = tcase_create("test_dec7");
	tcd8 = tcase_create("test_dec8");
	tcd9 = tcase_create("test_dec9");
	tcd10 = tcase_create("test_dec10");
	tcd11 = tcase_create("test_dec11");
	tcd12 = tcase_create("test_dec12");
	tcd13 = tcase_create("test_dec13");
	tcd14 = tcase_create("test_dec14");
	tcd15 = tcase_create("test_dec15");
	tcd16 = tcase_create("test_dec16");
	tcd17 = tcase_create("test_dec17");
	tcd18 = tcase_create("test_dec18");
	tcd19 = tcase_create("test_dec19");

	tcase_add_test(tci1, test_inc1);
	tcase_add_test(tci2, test_inc2);
	tcase_add_test(tci3, test_inc3);
	tcase_add_test(tci4, test_inc4);
	tcase_add_test(tci5, test_inc5);
	tcase_add_test(tci6, test_inc6);
	tcase_add_test(tci7, test_inc7);
	tcase_add_test(tci8, test_inc8);
	tcase_add_test(tci9, test_inc9);
	tcase_add_test(tci10, test_inc10);
	tcase_add_test(tci11, test_inc11);
	tcase_add_test(tci12, test_inc12);
	tcase_add_test(tci13, test_inc13);
	tcase_add_test(tci14, test_inc14);
	tcase_add_test(tci15, test_inc15);
	tcase_add_test(tci16, test_inc16);
	tcase_add_test(tci17, test_inc17);
	tcase_add_test(tcd1, test_dec1);
	tcase_add_test(tcd2, test_dec2);
	tcase_add_test(tcd3, test_dec3);
	tcase_add_test(tcd4, test_dec4);
	tcase_add_test(tcd5, test_dec5);
	tcase_add_test(tcd6, test_dec6);
	tcase_add_test(tcd7, test_dec7);
	tcase_add_test(tcd8, test_dec8);
	tcase_add_test(tcd9, test_dec9);
	tcase_add_test(tcd10, test_dec10);
	tcase_add_test(tcd11, test_dec11);
	tcase_add_test(tcd12, test_dec12);
	tcase_add_test(tcd13, test_dec13);
	tcase_add_test(tcd14, test_dec14);
	tcase_add_test(tcd15, test_dec15);
	tcase_add_test(tcd16, test_dec16);
	tcase_add_test(tcd17, test_dec17);
	tcase_add_test(tcd18, test_dec18);
	tcase_add_test(tcd19, test_dec19);

	suite_add_tcase(s, tci1);
	suite_add_tcase(s, tci2);
	suite_add_tcase(s, tci3);
	suite_add_tcase(s, tci4);
	suite_add_tcase(s, tci5);
	suite_add_tcase(s, tci6);
	suite_add_tcase(s, tci7);
	suite_add_tcase(s, tci8);
	suite_add_tcase(s, tci9);
	suite_add_tcase(s, tci10);
	suite_add_tcase(s, tci11);
	suite_add_tcase(s, tci12);
	suite_add_tcase(s, tci13);
	suite_add_tcase(s, tci14);
	suite_add_tcase(s, tci15);
	suite_add_tcase(s, tci16);
	suite_add_tcase(s, tci17);
	suite_add_tcase(s, tcd1);
	suite_add_tcase(s, tcd2);
	suite_add_tcase(s, tcd3);
	suite_add_tcase(s, tcd4);
	suite_add_tcase(s, tcd5);
	suite_add_tcase(s, tcd6);
	suite_add_tcase(s, tcd7);
	suite_add_tcase(s, tcd8);
	suite_add_tcase(s, tcd9);
	suite_add_tcase(s, tcd10);
	suite_add_tcase(s, tcd11);
	suite_add_tcase(s, tcd12);
	suite_add_tcase(s, tcd13);
	suite_add_tcase(s, tcd14);
	suite_add_tcase(s, tcd15);
	suite_add_tcase(s, tcd16);
	suite_add_tcase(s, tcd17);
	suite_add_tcase(s, tcd18);
	suite_add_tcase(s, tcd19);

	return s;
}

START_TEST(test_zero1)
{
	BigDouble* b = init_bigdouble("0");
	ck_assert_int_eq(bigdouble_is_zero(b), 1);
}
END_TEST

START_TEST(test_zero2)
{
	BigDouble* b = init_bigdouble("1");
	ck_assert_int_eq(bigdouble_is_zero(b), 0);
}
END_TEST

START_TEST(test_zero3)
{
	BigDouble* b = init_bigdouble("13");
	ck_assert_int_eq(bigdouble_is_zero(b), 0);
}
END_TEST

START_TEST(test_zero4)
{
	BigDouble* b = init_bigdouble("0000000001");
	ck_assert_int_eq(bigdouble_is_zero(b), 0);
}
END_TEST

START_TEST(test_zero5)
{
	BigDouble* b = init_bigdouble("1000000000");
	ck_assert_int_eq(bigdouble_is_zero(b), 0);
}
END_TEST

START_TEST(test_zero6)
{
	BigDouble* b = init_bigdouble("000");
	ck_assert_int_eq(bigdouble_is_zero(b), 1);
}
END_TEST

START_TEST(test_zero7)
{
	BigDouble* b = init_bigdouble("-0");
	ck_assert_int_eq(bigdouble_is_zero(b), 1);
}
END_TEST

START_TEST(test_zero8)
{
	BigDouble* b = init_bigdouble("0.0");
	ck_assert_int_eq(bigdouble_is_zero(b), 1);
}

START_TEST(test_zero9)
{
	BigDouble* b = init_bigdouble("0.1");
	ck_assert_int_eq(bigdouble_is_zero(b), 0);
}

START_TEST(test_zero10)
{
	BigDouble* b = init_bigdouble("0.0000000001");
	ck_assert_int_eq(bigdouble_is_zero(b), 0);
}

START_TEST(test_zero11)
{
	BigDouble* b = init_bigdouble("0.0000000");
	ck_assert_int_eq(bigdouble_is_zero(b), 1);
}

START_TEST(test_zero12)
{
	BigDouble* b = init_bigdouble("0.1234");
	ck_assert_int_eq(bigdouble_is_zero(b), 0);
}

Suite* suite_3(void)
{
	Suite* s = suite_create("Is zero");

	/* bigdouble_is_zero */

	TCase *tcz1, *tcz2, *tcz3, *tcz4, *tcz5,
		*tcz6, *tcz7, *tcz8, *tcz9, *tcz10,
		*tcz11, *tcz12;

	tcz1 = tcase_create("test_zero1");
	tcz2 = tcase_create("test_zero2");
	tcz3 = tcase_create("test_zero3");
	tcz4 = tcase_create("test_zero4");
	tcz5 = tcase_create("test_zero5");
	tcz6 = tcase_create("test_zero6");
	tcz7 = tcase_create("test_zero7");
	tcz8 = tcase_create("test_zero8");
	tcz9 = tcase_create("test_zero9");
	tcz10 = tcase_create("test_zero10");
	tcz11 = tcase_create("test_zero11");
	tcz12 = tcase_create("test_zero12");

	tcase_add_test(tcz1, test_zero1);
	tcase_add_test(tcz2, test_zero2);
	tcase_add_test(tcz3, test_zero3);
	tcase_add_test(tcz4, test_zero4);
	tcase_add_test(tcz5, test_zero5);
	tcase_add_test(tcz6, test_zero6);
	tcase_add_test(tcz7, test_zero7);
	tcase_add_test(tcz8, test_zero8);
	tcase_add_test(tcz9, test_zero9);
	tcase_add_test(tcz10, test_zero10);
	tcase_add_test(tcz11, test_zero11);
	tcase_add_test(tcz12, test_zero12);

	suite_add_tcase(s, tcz1);
	suite_add_tcase(s, tcz2);
	suite_add_tcase(s, tcz3);
	suite_add_tcase(s, tcz4);
	suite_add_tcase(s, tcz5);
	suite_add_tcase(s, tcz6);
	suite_add_tcase(s, tcz7);
	suite_add_tcase(s, tcz8);
	suite_add_tcase(s, tcz9);
	suite_add_tcase(s, tcz10);
	suite_add_tcase(s, tcz11);
	suite_add_tcase(s, tcz12);

	return s;
}

START_TEST(test_add1)
{
	BigDouble* a = init_bigdouble("1");
	BigDouble* b = init_bigdouble("1");
	bigdouble_add(a, b);						// issue is here?
	ck_assert_str_eq(bigdouble_str(a), "2");
}
END_TEST

START_TEST(test_add2)
{
	BigDouble* a = init_bigdouble("5");
	BigDouble* b = init_bigdouble("5");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "10");
}
END_TEST

START_TEST(test_add3)
{
	BigDouble* a = init_bigdouble("0");
	BigDouble* b = init_bigdouble("1");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "1");
}
END_TEST

START_TEST(test_add4)
{
	BigDouble* a = init_bigdouble("101");
	BigDouble* b = init_bigdouble("999");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "1100");
}
END_TEST

START_TEST(test_add5)
{
	BigDouble* a = init_bigdouble("123");
	BigDouble* b = init_bigdouble("321");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "444");
}
END_TEST

START_TEST(test_add6)
{
	BigDouble* a = init_bigdouble("91919199");
	BigDouble* b = init_bigdouble("9");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "91919208");
}
END_TEST

START_TEST(test_add7)
{
	BigDouble* a = init_bigdouble("99999999999999999999999999999999999999999999999999999");
	BigDouble* b = init_bigdouble("9999999999999999999999999999999999999999999999999999");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "109999999999999999999999999999999999999999999999999998");
}
END_TEST

START_TEST(test_add8)
{
	BigDouble* a = init_bigdouble("999");
	BigDouble* c = init_bigdouble("1");
	bigdouble_add(c, a);
	ck_assert_str_eq(bigdouble_str(c), "1000");
}
END_TEST

START_TEST(test_add9)
{
	BigDouble* a = init_bigdouble("999");
	BigDouble* b = init_bigdouble("2");
	BigDouble* c = init_bigdouble("1");
	bigdouble_add(c, a);
	bigdouble_add(c, b);
	ck_assert_str_eq(bigdouble_str(c), "1002");
}
END_TEST

START_TEST(test_add10)
{
	BigDouble* a = init_bigdouble(bigrandom2);
	BigDouble* b = init_bigdouble(bigrandom3);
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), bigrandom2plus3);
}
END_TEST

START_TEST(test_add11)
{
	BigDouble* a = init_bigdouble("0");
	BigDouble* b = init_bigdouble("0");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "0");
}
END_TEST

START_TEST(test_add12)
{
	BigDouble* a = init_bigdouble("0");
	BigDouble* b = init_bigdouble("1");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "1");
}
END_TEST

START_TEST(test_add13)
{
	BigDouble* a = init_bigdouble("23");
	BigDouble* b = init_bigdouble("6547");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "6570");
}
END_TEST

START_TEST(test_add14)
{
	BigDouble* a = init_bigdouble("543");
	BigDouble* b = init_bigdouble("-647");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-104");
}
END_TEST

START_TEST(test_add15)
{
	BigDouble* a = init_bigdouble("1");
	BigDouble* b = init_bigdouble("-1");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "0");
}
END_TEST

START_TEST(test_add16)
{
	BigDouble* a = init_bigdouble("-87965021342534104");
	BigDouble* b = init_bigdouble("-59189218383343860");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-147154239725877964");
}

START_TEST(test_add17)
{
	BigDouble* a = init_bigdouble("65071990312659677");
	BigDouble* b = init_bigdouble("-46872245772693183");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "18199744539966494");
}

START_TEST(test_add18)
{
	BigDouble* a = init_bigdouble("-50083965453612506");
	BigDouble* b = init_bigdouble("-20812259857712002");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-70896225311324508");
}

START_TEST(test_add19)
{
	BigDouble* a = init_bigdouble("18665520829693835");
	BigDouble* b = init_bigdouble("-92674503964500124");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-74008983134806289");
}

START_TEST(test_add20)
{
	BigDouble* a = init_bigdouble("68366052909099473");
	BigDouble* b = init_bigdouble("97247564404775889");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "165613617313875362");
}

START_TEST(test_add21)
{
	BigDouble* a = init_bigdouble("37972022770610942");
	BigDouble* b = init_bigdouble("54239538209639482");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "92211560980250424");
}

START_TEST(test_add22)
{
	BigDouble* a = init_bigdouble("10761410527138417");
	BigDouble* b = init_bigdouble("-68542664711131324");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-57781254183992907");
}

START_TEST(test_add23)
{
	BigDouble* a = init_bigdouble("-91409381331346772");
	BigDouble* b = init_bigdouble("90286879828525369");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-1122501502821403");
}

START_TEST(test_add24)
{
	BigDouble* a = init_bigdouble("88911489734820646");
	BigDouble* b = init_bigdouble("2382829458666319");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "91294319193486965");
}

START_TEST(test_add25)
{
	BigDouble* a = init_bigdouble("-58269757036146457");
	BigDouble* b = init_bigdouble("1469618875260204");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-56800138160886253");
}

START_TEST(test_add26)
{
	BigDouble* a = init_bigdouble("-13648997970638997");
	BigDouble* b = init_bigdouble("39074760047404138");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "25425762076765141");
}

START_TEST(test_add27)
{
	BigDouble* a = init_bigdouble("-9423323630604978");
	BigDouble* b = init_bigdouble("15578708292432202");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "6155384661827224");
}

START_TEST(test_add28)
{
	BigDouble* a = init_bigdouble("-33079034246528267");
	BigDouble* b = init_bigdouble("4402909874365888");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-28676124372162379");
}

START_TEST(test_add29)
{
	BigDouble* a = init_bigdouble("36118713762158444");
	BigDouble* b = init_bigdouble("82418764908260212");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "118537478670418656");
}

START_TEST(test_add30)
{
	BigDouble* a = init_bigdouble("-54742053220596639");
	BigDouble* b = init_bigdouble("78566500853702921");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "23824447633106282");
}

START_TEST(test_add31)
{
	BigDouble* a = init_bigdouble("3526554823938796480673317");
	BigDouble* b = init_bigdouble("1419659882047059726022197");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "4946214705985856206695514");
}

START_TEST(test_add32)
{
	BigDouble* a = init_bigdouble("9285734471532444945575623");
	BigDouble* b = init_bigdouble("-8411271209557655029829226");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "874463261974789915746397");
}

START_TEST(test_add33)
{
	BigDouble* a = init_bigdouble("9598407094166598425058595");
	BigDouble* b = init_bigdouble("4215542507060680612955316");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "13813949601227279038013911");
}

START_TEST(test_add34)
{
	BigDouble* a = init_bigdouble("8222103233295289442562459");
	BigDouble* b = init_bigdouble("-5838046851282563694621640");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "2384056382012725747940819");
}

START_TEST(test_add35)
{
	BigDouble* a = init_bigdouble("112303583317991207549693");
	BigDouble* b = init_bigdouble("8699335417151052985780413");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "8811639000469044193330106");
}

START_TEST(test_add36)
{
	BigDouble* a = init_bigdouble("-2573558002284920995931717");
	BigDouble* b = init_bigdouble("-9704181677975703268379509");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-12277739680260624264311226");
}

START_TEST(test_add37)
{
	BigDouble* a = init_bigdouble("-7945131048731951823606613");
	BigDouble* b = init_bigdouble("1348121196551481922591612");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-6597009852180469901015001");
}

START_TEST(test_add38)
{
	BigDouble* a = init_bigdouble("5530643481002997530233274");
	BigDouble* b = init_bigdouble("6364153723498048385703239");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "11894797204501045915936513");
}

START_TEST(test_add39)
{
	BigDouble* a = init_bigdouble("6752277336717106798380146");
	BigDouble* b = init_bigdouble("3334122717315639725452898");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "10086400054032746523833044");
}

START_TEST(test_add40)
{
	BigDouble* a = init_bigdouble("505280958355865078735046");
	BigDouble* b = init_bigdouble("3172924908653772883200751");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "3678205867009637961935797");
}

START_TEST(test_add41)
{
	BigDouble* a = init_bigdouble("-4593248299456080674945357");
	BigDouble* b = init_bigdouble("-4348355635257653486448370");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-8941603934713734161393727");
}

START_TEST(test_add42)
{
	BigDouble* a = init_bigdouble("660272867656327124649604");
	BigDouble* b = init_bigdouble("2628690911612776704078531");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "3288963779269103828728135");
}

START_TEST(test_add43)
{
	BigDouble* a = init_bigdouble("-4233091536674592154956115");
	BigDouble* b = init_bigdouble("9332943505983557315200081");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "5099851969308965160243966");
}

START_TEST(test_add44)
{
	BigDouble* a = init_bigdouble("-9327433773612264121899532");
	BigDouble* b = init_bigdouble("6070216746378195559986153");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-3257217027234068561913379");
}

START_TEST(test_add45)
{
	BigDouble* a = init_bigdouble("-8413679407483676080475731");
	BigDouble* b = init_bigdouble("-1155444434754672311811670");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-9569123842238348392287401");
}

START_TEST(test_add46)
{
	BigDouble* a = init_bigdouble("-3094948473749556279199331");
	BigDouble* b = init_bigdouble("930431412530698366077563");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-2164517061218857913121768");
}

START_TEST(test_add47)
{
	BigDouble* a = init_bigdouble("6200368545540965244384006");
	BigDouble* b = init_bigdouble("-8901268517022200327477898");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-2700899971481235083093892");
}

START_TEST(test_add48)
{
	BigDouble* a = init_bigdouble("-1494279802644224808749578");
	BigDouble* b = init_bigdouble("3603069459576693705546632");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "2108789656932468896797054");
}

START_TEST(test_add49)
{
	BigDouble* a = init_bigdouble("2471161061948476604944053");
	BigDouble* b = init_bigdouble("9507137138709587947511361");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "11978298200658064552455414");
}

START_TEST(test_add50)
{
	BigDouble* a = init_bigdouble("6852324392615808523839648");
	BigDouble* b = init_bigdouble("9502475016724669752058382");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "16354799409340478275898030");
}

START_TEST(test_add51)
{
	BigDouble* a = init_bigdouble("-90048204671371868073426484403001420266189927883501447626906434935581022948850168464335811");
	BigDouble* b = init_bigdouble("-32180174615637837862015029743780368742163152539829870512534362018562864710617341439955894");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-122228379287009705935441514146781789008353080423331318139440796954143887659467509904291705");
}

START_TEST(test_add52)
{
	BigDouble* a = init_bigdouble("95687839414785639624633783029920083420639193574397697652276395333104157587184448098726708");
	BigDouble* b = init_bigdouble("90432536131430868266379331437922950774694350571552882837590249769761123242282298379604057");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "186120375546216507891013114467843034195333544145950580489866645102865280829466746478330765");
}

START_TEST(test_add53)
{
	BigDouble* a = init_bigdouble("60213997329046213519592945700794842299861062666724662357927289358284814344647144662804010");
	BigDouble* b = init_bigdouble("-3442411364989516152133046793489429537846201777619364652422325014461658247068070536162151");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "56771585964056697367459898907305412762014860889105297705504964343823156097579074126641859");
}

START_TEST(test_add54)
{
	BigDouble* a = init_bigdouble("89210603119345057979877670624046981373375932031200147008329529647254453566789744383629782");
	BigDouble* b = init_bigdouble("-80572063528491914153102263559493127519268431774282045072632937398733207507458957564231501");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "8638539590853143826775407064553853854107500256918101935696592248521246059330786819398281");
}

START_TEST(test_add55)
{
	BigDouble* a = init_bigdouble("-89885275510722813061569601125192377207579442070152094022603743937959975787454837868478576");
	BigDouble* b = init_bigdouble("-62261508465673524797763796455104362148456471484182680655349828166413863719939710299390398");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-152146783976396337859333397580296739356035913554334774677953572104373839507394548167868974");
}

START_TEST(test_add56)
{
	BigDouble* a = init_bigdouble("-36423329631115079034042700864495877170997655757488850498204468042319334730757211843669331");
	BigDouble* b = init_bigdouble("67835333217302822345444570694487164999045330884909183336004642229338205008399638917698602");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "31412003586187743311401869829991287828047675127420332837800174187018870277642427074029271");
}

START_TEST(test_add57)
{
	BigDouble* a = init_bigdouble("71870711554467872386339149180278694645684904121304185467538161596082041364661560276738912");
	BigDouble* b = init_bigdouble("25221083355504179051290731929560697234124736414303710605405456020482413954873463316817138");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "97091794909972051437629881109839391879809640535607896072943617616564455319535023593556050");
}

START_TEST(test_add58)
{
	BigDouble* a = init_bigdouble("-91350925772119674801267463767557756124721112409804741896275822361005343656889964121432837");
	BigDouble* b = init_bigdouble("-77297200729551200179914754400544923544248351057900670963120405765371866935099343584405776");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-168648126501670874981182218168102679668969463467705412859396228126377210591989307705838613");
}

START_TEST(test_add59)
{
	BigDouble* a = init_bigdouble("53199859178862442622525901893527564501825472787270043776407722832648804476064114141979591");
	BigDouble* b = init_bigdouble("-7918691507656057496340411669318583830078108870997433968844564395601950284635504338307721");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "45281167671206385126185490224208980671747363916272609807563158437046854191428609803671870");
}



Suite* suite_4(void)
{
	Suite* s = suite_create("Addition");

	/* Adding two big doubles */

	TCase *tca1, *tca2, *tca3, *tca4, *tca5,
		*tca6, *tca7, *tca8, *tca9, *tca10,
		*tca11, *tca12, *tca13, *tca14, *tca15, 
		*tca16, *tca17, *tca18, *tca19, *tca20,
		*tca21, *tca22, *tca23, *tca24, *tca25,
		*tca26, *tca27, *tca28, *tca29, *tca30,
		*tca31, *tca32, *tca33, *tca34, *tca35,
		*tca36, *tca37, *tca38, *tca39, *tca40,
		*tca41, *tca42, *tca43, *tca44, *tca45,
		*tca46, *tca47, *tca48, *tca49, *tca50,
		*tca51, *tca52, *tca53, *tca54, *tca55,
		*tca56, *tca57, *tca58, *tca59;

	tca1 = tcase_create("test_add1");
	tca2 = tcase_create("test_add2");
	tca3 = tcase_create("test_add3");
	tca4 = tcase_create("test_add4");
	tca5 = tcase_create("test_add5");
	tca6 = tcase_create("test_add6");
	tca7 = tcase_create("test_add7");
	tca8 = tcase_create("test_add8");
	tca9 = tcase_create("test_add9");
	tca10 = tcase_create("test_add10");
	tca11 = tcase_create("test_add11");
	tca12 = tcase_create("test_add12");
	tca13 = tcase_create("test_add13");
	tca14 = tcase_create("test_add14");
	tca15 = tcase_create("test_add15");
	tca16 = tcase_create("test_add16");
	tca17 = tcase_create("test_add17");
	tca18 = tcase_create("test_add18");
	tca19 = tcase_create("test_add19");
	tca20 = tcase_create("test_add20");
	tca21 = tcase_create("test_add21");
	tca22 = tcase_create("test_add22");
	tca23 = tcase_create("test_add23");
	tca24 = tcase_create("test_add24");
	tca25 = tcase_create("test_add25");
	tca26 = tcase_create("test_add26");
	tca27 = tcase_create("test_add27");
	tca28 = tcase_create("test_add28");
	tca29 = tcase_create("test_add29");
	tca30 = tcase_create("test_add30");
	tca31 = tcase_create("test_add31");
	tca32 = tcase_create("test_add32");
	tca33 = tcase_create("test_add33");
	tca34 = tcase_create("test_add34");
	tca35 = tcase_create("test_add35");
	tca36 = tcase_create("test_add36");
	tca37 = tcase_create("test_add37");
	tca38 = tcase_create("test_add38");
	tca39 = tcase_create("test_add39");
	tca40 = tcase_create("test_add40");
	tca41 = tcase_create("test_add41");
	tca42 = tcase_create("test_add42");
	tca43 = tcase_create("test_add43");
	tca44 = tcase_create("test_add44");
	tca45 = tcase_create("test_add45");
	tca46 = tcase_create("test_add46");
	tca47 = tcase_create("test_add47");
	tca48 = tcase_create("test_add48");
	tca49 = tcase_create("test_add49");
	tca50 = tcase_create("test_add50");
	tca51 = tcase_create("test_add51");
	tca52 = tcase_create("test_add52");
	tca53 = tcase_create("test_add53");
	tca54 = tcase_create("test_add54");
	tca55 = tcase_create("test_add55");
	tca56 = tcase_create("test_add56");
	tca57 = tcase_create("test_add57");
	tca58 = tcase_create("test_add58");
	tca59 = tcase_create("test_add59");

	tcase_add_test(tca1, test_add1);
	tcase_add_test(tca2, test_add2);
	tcase_add_test(tca3, test_add3);
	tcase_add_test(tca4, test_add4);
	tcase_add_test(tca5, test_add5);
	tcase_add_test(tca6, test_add6);
	tcase_add_test(tca7, test_add7);
	tcase_add_test(tca8, test_add8);
	tcase_add_test(tca9, test_add9);
	tcase_add_test(tca10, test_add10);
	tcase_add_test(tca11, test_add11);
	tcase_add_test(tca12, test_add12);
	tcase_add_test(tca13, test_add13);
	tcase_add_test(tca14, test_add14);
	tcase_add_test(tca15, test_add15);
	tcase_add_test(tca16, test_add16);
	tcase_add_test(tca17, test_add17);
	tcase_add_test(tca18, test_add18);
	tcase_add_test(tca19, test_add19);
	tcase_add_test(tca20, test_add20);
	tcase_add_test(tca21, test_add21);
	tcase_add_test(tca22, test_add22);
	tcase_add_test(tca23, test_add23);
	tcase_add_test(tca24, test_add24);
	tcase_add_test(tca25, test_add25);
	tcase_add_test(tca26, test_add26);
	tcase_add_test(tca27, test_add27);
	tcase_add_test(tca28, test_add28);
	tcase_add_test(tca29, test_add29);
	tcase_add_test(tca30, test_add30);
	tcase_add_test(tca31, test_add31);
	tcase_add_test(tca32, test_add32);
	tcase_add_test(tca33, test_add33);
	tcase_add_test(tca34, test_add34);
	tcase_add_test(tca35, test_add35);
	tcase_add_test(tca36, test_add36);
	tcase_add_test(tca37, test_add37);
	tcase_add_test(tca38, test_add38);
	tcase_add_test(tca39, test_add39);
	tcase_add_test(tca40, test_add40);
	tcase_add_test(tca41, test_add41);
	tcase_add_test(tca42, test_add42);
	tcase_add_test(tca43, test_add43);
	tcase_add_test(tca44, test_add44);
	tcase_add_test(tca45, test_add45);
	tcase_add_test(tca46, test_add46);
	tcase_add_test(tca47, test_add47);
	tcase_add_test(tca48, test_add48);
	tcase_add_test(tca49, test_add49);
	tcase_add_test(tca50, test_add50);
	tcase_add_test(tca51, test_add51);
	tcase_add_test(tca52, test_add52);
	tcase_add_test(tca53, test_add53);
	tcase_add_test(tca54, test_add54);
	tcase_add_test(tca55, test_add55);
	tcase_add_test(tca56, test_add56);
	tcase_add_test(tca57, test_add57);
	tcase_add_test(tca58, test_add58);
	tcase_add_test(tca59, test_add59);

	suite_add_tcase(s, tca1);
	suite_add_tcase(s, tca2);
	suite_add_tcase(s, tca3);
	suite_add_tcase(s, tca4);
	suite_add_tcase(s, tca5);
	suite_add_tcase(s, tca6);
	suite_add_tcase(s, tca7);
	suite_add_tcase(s, tca8);
	suite_add_tcase(s, tca9);
	suite_add_tcase(s, tca10);
	suite_add_tcase(s, tca11);
	suite_add_tcase(s, tca12);
	suite_add_tcase(s, tca13);
	suite_add_tcase(s, tca14);
	suite_add_tcase(s, tca15);
	suite_add_tcase(s, tca16);
	suite_add_tcase(s, tca17);
	suite_add_tcase(s, tca18);
	suite_add_tcase(s, tca19);
	suite_add_tcase(s, tca20);
	suite_add_tcase(s, tca21);
	suite_add_tcase(s, tca22);
	suite_add_tcase(s, tca23);
	suite_add_tcase(s, tca24);
	suite_add_tcase(s, tca25);
	suite_add_tcase(s, tca26);
	suite_add_tcase(s, tca27);
	suite_add_tcase(s, tca28);
	suite_add_tcase(s, tca29);
	suite_add_tcase(s, tca30);
	suite_add_tcase(s, tca31);
	suite_add_tcase(s, tca32);
	suite_add_tcase(s, tca33);
	suite_add_tcase(s, tca34);
	suite_add_tcase(s, tca35);
	suite_add_tcase(s, tca36);
	suite_add_tcase(s, tca37);
	suite_add_tcase(s, tca38);
	suite_add_tcase(s, tca39);
	suite_add_tcase(s, tca40);
	suite_add_tcase(s, tca41);
	suite_add_tcase(s, tca42);
	suite_add_tcase(s, tca43);
	suite_add_tcase(s, tca44);
	suite_add_tcase(s, tca45);
	suite_add_tcase(s, tca46);
	suite_add_tcase(s, tca47);
	suite_add_tcase(s, tca48);
	suite_add_tcase(s, tca49);
	suite_add_tcase(s, tca50);
	suite_add_tcase(s, tca51);
	suite_add_tcase(s, tca52);
	suite_add_tcase(s, tca53);
	suite_add_tcase(s, tca54);
	suite_add_tcase(s, tca55);
	suite_add_tcase(s, tca56);
	suite_add_tcase(s, tca57);
	suite_add_tcase(s, tca58);
	suite_add_tcase(s, tca59);

	return s;
}

/* Bigdouble comparisons */

START_TEST(test_eq1)
{
	BigDouble* a = init_bigdouble("20");
	BigDouble* b = init_bigdouble("20");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 1);
}
END_TEST

START_TEST(test_eq2)
{
	BigDouble* a = init_bigdouble("2");
	BigDouble* b = init_bigdouble("1");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 0);
}
END_TEST

START_TEST(test_eq3)
{
	BigDouble* a = init_bigdouble("-1");
	BigDouble* b = init_bigdouble("1");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 0);
}
END_TEST

START_TEST(test_eq4)
{
	BigDouble* a = init_bigdouble(bigrandom1);
	BigDouble* b = init_bigdouble(bigrandom1);
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 1);
}
END_TEST

START_TEST(test_eq5)
{
	BigDouble* a = init_bigdouble(bigrandom1);
	BigDouble* b = init_bigdouble(bigrandom2);
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 0);
}
END_TEST

START_TEST(test_eq6)
{
	BigDouble* a = init_bigdouble(bigrandom2);
	BigDouble* b = init_bigdouble(bigrandom3);
	BigDouble* c = init_bigdouble(bigrandom2plus3);
	bigdouble_add(a, b);
	ck_assert_int_eq(bigdouble_cmp(a, "==", c), 1);
}
END_TEST

START_TEST(test_eq7)
{
	BigDouble* a = init_bigdouble("123");
	BigDouble* b = init_bigdouble("124");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 0);
}
END_TEST

START_TEST(test_eq8)
{
	BigDouble* a = init_bigdouble("123");
	BigDouble* b = init_bigdouble("321");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 0);
}
END_TEST

START_TEST(test_eq9)
{
	BigDouble* a = init_bigdouble("12322222");
	BigDouble* b = init_bigdouble("12322221");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 0);
}
END_TEST

START_TEST(test_eq10)
{
	BigDouble* a = init_bigdouble("-123");
	BigDouble* b = init_bigdouble("-123");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 1);
}
END_TEST

START_TEST(test_eq11)
{
	BigDouble* a = init_bigdouble("1");
	BigDouble* b = init_bigdouble("1");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 1);
}
END_TEST

START_TEST(test_eq12)
{
	BigDouble* a = init_bigdouble("0");
	BigDouble* b = init_bigdouble("0");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 1);
}
END_TEST

START_TEST(test_eq13)
{
	BigDouble* a = init_bigdouble("10");
	BigDouble* b = init_bigdouble("10");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 1);
}
END_TEST

START_TEST(test_eq14)
{
	BigDouble* a = init_bigdouble("-10.123748234283");
	BigDouble* b = init_bigdouble("-10.123748234283");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 1);
}
END_TEST

START_TEST(test_eq15)
{
	BigDouble* a = init_bigdouble("0.1");
	BigDouble* b = init_bigdouble("0.1");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 1);
}
END_TEST

START_TEST(test_eq16)
{
	BigDouble* a = init_bigdouble("1.14322873429347236128736418234");
	BigDouble* b = init_bigdouble("1.14322873429347236128736418235");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 0);
}
END_TEST

START_TEST(test_eq17)
{
	BigDouble* a = init_bigdouble("1.0");
	BigDouble* b = init_bigdouble("1");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 1);
}
END_TEST

START_TEST(test_eq18)
{
	BigDouble* a = init_bigdouble("1.1");
	BigDouble* b = init_bigdouble("1");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 0);
}
END_TEST

START_TEST(test_eq19)
{
	BigDouble* a = init_bigdouble("1.0000");
	BigDouble* b = init_bigdouble("1.0");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 1);
}
END_TEST

START_TEST(test_eq20)
{
	BigDouble* a = init_bigdouble("1");
	BigDouble* b = init_bigdouble("1.1");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 0);
	ck_assert_str_eq(bigdouble_str(a), "1"); // test swap back
}
END_TEST

START_TEST(test_le1)
{
	BigDouble* a = init_bigdouble("3");
	BigDouble* b = init_bigdouble("7");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}
END_TEST

START_TEST(test_le2)
{
	BigDouble* a = init_bigdouble("1");
	BigDouble* b = init_bigdouble("2");
	ck_assert_int_eq(a->sign, 0);
	ck_assert_int_eq(b->sign, 0);

	ck_assert_int_eq(a->start_idx, 1);
	ck_assert_int_eq(b->start_idx, 1);

	ck_assert_int_eq(a->start_idx, 1);
	ck_assert_int_eq(a->start_idx, 1);
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}
END_TEST

START_TEST(test_le3)
{
	BigDouble* a = init_bigdouble("34");
	BigDouble* b = init_bigdouble("76");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}
END_TEST

START_TEST(test_le4)
{
	BigDouble* a = init_bigdouble("10");
	BigDouble* b = init_bigdouble("100");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}
END_TEST

START_TEST(test_le5)
{
	BigDouble* a = init_bigdouble("0");
	BigDouble* b = init_bigdouble("0");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}
END_TEST

START_TEST(test_le6)
{
	BigDouble* a = init_bigdouble("6654");
	BigDouble* b = init_bigdouble("2");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}
END_TEST

START_TEST(test_le7)
{
	BigDouble* a = init_bigdouble("-1");
	BigDouble* b = init_bigdouble("0");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}
END_TEST

START_TEST(test_le8)
{
	BigDouble* a = init_bigdouble("-10");
	BigDouble* b = init_bigdouble("2");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}
END_TEST

START_TEST(test_le9)
{
	BigDouble* a = init_bigdouble("-1");
	BigDouble* b = init_bigdouble("-10");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}
END_TEST

START_TEST(test_le10)
{
	BigDouble* a = init_bigdouble("-7");
	BigDouble* b = init_bigdouble("-3");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}
END_TEST

START_TEST(test_le11)
{
	BigDouble* a = init_bigdouble("676573456324561253452457324564513");
	BigDouble* b = init_bigdouble("676573456324561253452457324564514");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}
END_TEST

START_TEST(test_le12)
{
	BigDouble* a = init_bigdouble("100");
	BigDouble* b = init_bigdouble("101");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}
END_TEST

START_TEST(test_le13)
{
	BigDouble* a = init_bigdouble("793");
	BigDouble* b = init_bigdouble("923");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}
END_TEST

START_TEST(test_le14)
{
	BigDouble* a = init_bigdouble("65");
	BigDouble* b = init_bigdouble("-46");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}
END_TEST

START_TEST(test_leq1)
{
	BigDouble* a = init_bigdouble("0");
	BigDouble* b = init_bigdouble("0");
	ck_assert_int_eq(bigdouble_cmp(a, "<=", b), 1);
}
END_TEST

START_TEST(test_leq2)
{
	BigDouble* a = init_bigdouble("100");
	BigDouble* b = init_bigdouble("100");
	ck_assert_int_eq(bigdouble_cmp(a, "<=", b), 1);
}
END_TEST

START_TEST(test_leq3)
{
	BigDouble* a = init_bigdouble("100");
	BigDouble* b = init_bigdouble("101");
	ck_assert_int_eq(bigdouble_cmp(a, "<=", b), 1);
}
END_TEST

START_TEST(test_leq4)
{
	BigDouble* a = init_bigdouble("100");
	BigDouble* b = init_bigdouble("-100");
	ck_assert_int_eq(bigdouble_cmp(a, "<=", b), 0);
}
END_TEST

START_TEST(test_leq5)
{
	BigDouble* a = init_bigdouble("100");
	BigDouble* b = init_bigdouble("101");
	ck_assert_int_eq(bigdouble_cmp(a, "<=", b), 1);
}
END_TEST

START_TEST(test_leq6)
{
	BigDouble* a = init_bigdouble("100");
	BigDouble* b = init_bigdouble("99");
	ck_assert_int_eq(bigdouble_cmp(a, "<=", b), 0);
}
END_TEST

START_TEST(test_leq7)
{
	BigDouble* a = init_bigdouble("-100");
	BigDouble* b = init_bigdouble("100");
	ck_assert_int_eq(bigdouble_cmp(a, "<=", b), 1);
}
END_TEST

START_TEST(test_leq8)
{
	BigDouble* a = init_bigdouble("-100");
	BigDouble* b = init_bigdouble("1");
	ck_assert_int_eq(bigdouble_cmp(a, "<=", b), 1);
}
END_TEST

START_TEST(test_leq9)
{
	BigDouble* a = init_bigdouble("-1");
	BigDouble* b = init_bigdouble("1");
	ck_assert_int_eq(bigdouble_cmp(a, "<=", b), 1);
}
END_TEST

START_TEST(test_gr1)
{
	BigDouble* a = init_bigdouble("1");
	BigDouble* b = init_bigdouble("1");
	ck_assert_int_eq(bigdouble_cmp(a, ">", b), 0);
}
END_TEST

START_TEST(test_gr2)
{
	BigDouble* a = init_bigdouble("0");
	BigDouble* b = init_bigdouble("0");
	ck_assert_int_eq(bigdouble_cmp(a, ">", b), 0);
}
END_TEST

START_TEST(test_gr3)
{
	BigDouble* a = init_bigdouble("0");
	BigDouble* b = init_bigdouble("0");
	ck_assert_int_eq(bigdouble_cmp(a, ">", b), 0);
}
END_TEST

START_TEST(test_gr4)
{
	BigDouble* a = init_bigdouble("1");
	BigDouble* b = init_bigdouble("0");
	ck_assert_int_eq(bigdouble_cmp(a, ">", b), 1);
}
END_TEST

START_TEST(test_gr5)
{
	BigDouble* a = init_bigdouble(bigrandom1);
	BigDouble* b = init_bigdouble("100");
	ck_assert_int_eq(bigdouble_cmp(a, ">", b), 1);
}
END_TEST

START_TEST(test_gr6)
{
	BigDouble* a = init_bigdouble("1245325634573452345");
	BigDouble* b = init_bigdouble("1245325634573452344");
	ck_assert_int_eq(bigdouble_cmp(a, ">", b), 1);
}
END_TEST

START_TEST(test_gr7)
{
	BigDouble* a = init_bigdouble("-10000");
	BigDouble* b = init_bigdouble("12345");
	ck_assert_int_eq(bigdouble_cmp(a, ">", b), 0);
}
END_TEST

START_TEST(test_gr8)
{
	BigDouble* a = init_bigdouble("12345");
	BigDouble* b = init_bigdouble("-10000");
	ck_assert_int_eq(bigdouble_cmp(a, ">", b), 1);
}
END_TEST

START_TEST(test_gr9)
{
	BigDouble* a = init_bigdouble("12345");
	BigDouble* b = init_bigdouble("-10000");
	ck_assert_int_eq(bigdouble_cmp(a, ">", b), 1);
}
END_TEST

START_TEST(test_gre1)
{
	BigDouble* a = init_bigdouble("1");
	BigDouble* b = init_bigdouble("1");
	ck_assert_int_eq(bigdouble_cmp(a, ">=", b), 1);
}
END_TEST

START_TEST(test_gre2)
{
	BigDouble* a = init_bigdouble("-1");
	BigDouble* b = init_bigdouble("1");
	ck_assert_int_eq(bigdouble_cmp(a, ">=", b), 0);
}
END_TEST

START_TEST(test_gre3)
{
	BigDouble* a = init_bigdouble("-10");
	BigDouble* b = init_bigdouble("10000000");
	ck_assert_int_eq(bigdouble_cmp(a, ">=", b), 0);
}
END_TEST

START_TEST(test_gre4)
{
	BigDouble* a = init_bigdouble("10000000");
	BigDouble* b = init_bigdouble("-10");
	ck_assert_int_eq(bigdouble_cmp(a, ">=", b), 1);
}
END_TEST

START_TEST(test_gre5)
{
	BigDouble* a = init_bigdouble("100000000");
	BigDouble* b = init_bigdouble("10000000");
	ck_assert_int_eq(bigdouble_cmp(a, ">=", b), 1);
}
END_TEST

START_TEST(test_gre6)
{
	BigDouble* a = init_bigdouble("19999999");
	BigDouble* b = init_bigdouble("10000000");
	ck_assert_int_eq(bigdouble_cmp(a, ">=", b), 1);
}
END_TEST

START_TEST(test_gre7)
{
	BigDouble* a = init_bigdouble("0");
	BigDouble* b = init_bigdouble("0");
	ck_assert_int_eq(bigdouble_cmp(a, ">=", b), 1);
}
END_TEST

START_TEST(test_gre8)
{
	BigDouble* a = init_bigdouble("0");
	BigDouble* b = init_bigdouble("10");
	ck_assert_int_eq(bigdouble_cmp(a, ">=", b), 0);
}
END_TEST

START_TEST(test_gre9)
{
	BigDouble* a = init_bigdouble("1");
	BigDouble* b = init_bigdouble("1");
	BigDouble* c = init_bigdouble("1");
	bigdouble_add(a, c);
	ck_assert_int_eq(bigdouble_cmp(a, ">=", b), 1);
}
END_TEST


Suite* suite_5(void)
{
	Suite* s = suite_create("Comparison");

	TCase *tceq1, *tceq2, *tceq3, *tceq4, *tceq5,
		*tceq6, *tceq7, *tceq8, *tceq9, *tceq10,
		*tceq11, *tceq12, *tceq13, *tceq14, *tceq15,
		*tceq16, *tceq17, *tceq18, *tceq19, *tceq20;

	TCase *tcle1, *tcle2, *tcle3, *tcle4, *tcle5,
		*tcle6, *tcle7, *tcle8, *tcle9, *tcle10,
		*tcle11, *tcle12, *tcle13, *tcle14;

	TCase *tcleq1, *tcleq2, *tcleq3, *tcleq4, *tcleq5,
		*tcleq6, *tcleq7, *tcleq8, *tcleq9;

	TCase *tcgr1, *tcgr2, *tcgr3, *tcgr4, *tcgr5,
		*tcgr6, *tcgr7, *tcgr8, *tcgr9;

	TCase *tcgre1, *tcgre2, *tcgre3, *tcgre4, *tcgre5,
		*tcgre6, *tcgre7, *tcgre8, *tcgre9;

	tceq1 = tcase_create("test_eq1");
	tceq2 = tcase_create("test_eq2");
	tceq3 = tcase_create("test_eq3");
	tceq4 = tcase_create("test_eq4");
	tceq5 = tcase_create("test_eq5");
	tceq6 = tcase_create("test_eq6");
	tceq7 = tcase_create("test_eq7");
	tceq8 = tcase_create("test_eq8");
	tceq9 = tcase_create("test_eq9");
	tceq10 = tcase_create("test_eq10");
	tceq11 = tcase_create("test_eq11");
	tceq12 = tcase_create("test_eq12");
	tceq13 = tcase_create("test_eq13");
	tceq14 = tcase_create("test_eq14");
	tceq15 = tcase_create("test_eq15");
	tceq16 = tcase_create("test_eq16");
	tceq17 = tcase_create("test_eq17");
	tceq18 = tcase_create("test_eq18");
	tceq19 = tcase_create("test_eq19");
	tceq20 = tcase_create("test_eq20");
	tcle1 = tcase_create("test_le1");
	tcle2 = tcase_create("test_le2");
	tcle3 = tcase_create("test_le3");
	tcle4 = tcase_create("test_le4");
	tcle5 = tcase_create("test_le5");
	tcle6 = tcase_create("test_le6");
	tcle7 = tcase_create("test_le7");
	tcle8 = tcase_create("test_le8");
	tcle9 = tcase_create("test_le9");
	tcle10 = tcase_create("test_le10");
	tcle11 = tcase_create("test_le11");
	tcle12 = tcase_create("test_le12");
	tcle13 = tcase_create("test_le13");
	tcle14 = tcase_create("test_le14");
	tcleq1 = tcase_create("test_leq1");
	tcleq2 = tcase_create("test_leq2");
	tcleq3 = tcase_create("test_leq3");
	tcleq4 = tcase_create("test_leq4");
	tcleq5 = tcase_create("test_leq5");
	tcleq6 = tcase_create("test_leq6");
	tcleq7 = tcase_create("test_leq7");
	tcleq8 = tcase_create("test_leq8");
	tcleq9 = tcase_create("test_leq9");
	tcgr1 = tcase_create("test_gr1");
	tcgr2 = tcase_create("test_gr2");
	tcgr3 = tcase_create("test_gr3");
	tcgr4 = tcase_create("test_gr4");
	tcgr5 = tcase_create("test_gr5");
	tcgr6 = tcase_create("test_gr6");
	tcgr7 = tcase_create("test_gr7");
	tcgr8 = tcase_create("test_gr8");
	tcgr9 = tcase_create("test_gr9");
	tcgre1 = tcase_create("test_gre1");
	tcgre2 = tcase_create("test_gre2");
	tcgre3 = tcase_create("test_gre3");
	tcgre4 = tcase_create("test_gre4");
	tcgre5 = tcase_create("test_gre5");
	tcgre6 = tcase_create("test_gre6");
	tcgre7 = tcase_create("test_gre7");
	tcgre8 = tcase_create("test_gre8");
	tcgre9 = tcase_create("test_gre9");

	tcase_add_test(tceq1, test_eq1);
	tcase_add_test(tceq2, test_eq2);
	tcase_add_test(tceq3, test_eq3);
	tcase_add_test(tceq4, test_eq4);
	tcase_add_test(tceq5, test_eq5);
	tcase_add_test(tceq6, test_eq6);
	tcase_add_test(tceq7, test_eq7);
	tcase_add_test(tceq8, test_eq8);
	tcase_add_test(tceq9, test_eq9);
	tcase_add_test(tceq10, test_eq10);
	tcase_add_test(tceq11, test_eq11);
	tcase_add_test(tceq12, test_eq12);
	tcase_add_test(tceq13, test_eq13);
	tcase_add_test(tceq14, test_eq14);
	tcase_add_test(tceq15, test_eq15);
	tcase_add_test(tceq16, test_eq16);
	tcase_add_test(tceq17, test_eq17);
	tcase_add_test(tceq18, test_eq18);
	tcase_add_test(tceq19, test_eq19);
	tcase_add_test(tceq20, test_eq20);
	tcase_add_test(tcle1, test_le1);
	tcase_add_test(tcle2, test_le2);
	tcase_add_test(tcle3, test_le3);
	tcase_add_test(tcle4, test_le4);
	tcase_add_test(tcle5, test_le5);
	tcase_add_test(tcle6, test_le6);
	tcase_add_test(tcle7, test_le7);
	tcase_add_test(tcle8, test_le8);
	tcase_add_test(tcle9, test_le9);
	tcase_add_test(tcle10, test_le10);
	tcase_add_test(tcle11, test_le11);
	tcase_add_test(tcle12, test_le12);
	tcase_add_test(tcle13, test_le13);
	tcase_add_test(tcle14, test_le14);
	tcase_add_test(tcleq1, test_leq1);
	tcase_add_test(tcleq2, test_leq2);
	tcase_add_test(tcleq3, test_leq3);
	tcase_add_test(tcleq4, test_leq4);
	tcase_add_test(tcleq5, test_leq5);
	tcase_add_test(tcleq6, test_leq6);
	tcase_add_test(tcleq7, test_leq7);
	tcase_add_test(tcleq8, test_leq8);
	tcase_add_test(tcleq9, test_leq9);
	tcase_add_test(tcgr1, test_gr1);
	tcase_add_test(tcgr2, test_gr2);
	tcase_add_test(tcgr3, test_gr3);
	tcase_add_test(tcgr4, test_gr4);
	tcase_add_test(tcgr5, test_gr5);
	tcase_add_test(tcgr6, test_gr6);
	tcase_add_test(tcgr7, test_gr7);
	tcase_add_test(tcgr8, test_gr8);
	tcase_add_test(tcgr9, test_gr9);
	tcase_add_test(tcgre1, test_gre1);
	tcase_add_test(tcgre2, test_gre2);
	tcase_add_test(tcgre3, test_gre3);
	tcase_add_test(tcgre4, test_gre4);
	tcase_add_test(tcgre5, test_gre5);
	tcase_add_test(tcgre6, test_gre6);
	tcase_add_test(tcgre7, test_gre7);
	tcase_add_test(tcgre8, test_gre8);
	tcase_add_test(tcgre9, test_gre9);

	suite_add_tcase(s, tceq1);
	suite_add_tcase(s, tceq2);
	suite_add_tcase(s, tceq3);
	suite_add_tcase(s, tceq4);
	suite_add_tcase(s, tceq5);
	suite_add_tcase(s, tceq6);
	suite_add_tcase(s, tceq7);
	suite_add_tcase(s, tceq8);
	suite_add_tcase(s, tceq9);
	suite_add_tcase(s, tceq10);
	suite_add_tcase(s, tceq11);
	suite_add_tcase(s, tceq12);
	suite_add_tcase(s, tceq13);
	suite_add_tcase(s, tceq14);
	suite_add_tcase(s, tceq15);
	suite_add_tcase(s, tceq16);
	suite_add_tcase(s, tceq17);
	suite_add_tcase(s, tceq18);
	suite_add_tcase(s, tceq19);
	suite_add_tcase(s, tceq20);
	suite_add_tcase(s, tcle1);
	suite_add_tcase(s, tcle2);
	suite_add_tcase(s, tcle3);
	suite_add_tcase(s, tcle4);
	suite_add_tcase(s, tcle5);
	suite_add_tcase(s, tcle6);
	suite_add_tcase(s, tcle7);
	suite_add_tcase(s, tcle8);
	suite_add_tcase(s, tcle9);
	suite_add_tcase(s, tcle10);
	suite_add_tcase(s, tcle11);
	suite_add_tcase(s, tcle12);
	suite_add_tcase(s, tcle13);
	suite_add_tcase(s, tcle14);
	suite_add_tcase(s, tcleq1);
	suite_add_tcase(s, tcleq2);
	suite_add_tcase(s, tcleq3);
	suite_add_tcase(s, tcleq4);
	suite_add_tcase(s, tcleq5);
	suite_add_tcase(s, tcleq6);
	suite_add_tcase(s, tcleq7);
	suite_add_tcase(s, tcleq8);
	suite_add_tcase(s, tcleq9);
	suite_add_tcase(s, tcgr1);
	suite_add_tcase(s, tcgr2);
	suite_add_tcase(s, tcgr3);
	suite_add_tcase(s, tcgr4);
	suite_add_tcase(s, tcgr5);
	suite_add_tcase(s, tcgr6);
	suite_add_tcase(s, tcgr7);
	suite_add_tcase(s, tcgr8);
	suite_add_tcase(s, tcgr9);
	suite_add_tcase(s, tcgre1);
	suite_add_tcase(s, tcgre2);
	suite_add_tcase(s, tcgre3);
	suite_add_tcase(s, tcgre4);
	suite_add_tcase(s, tcgre5);
	suite_add_tcase(s, tcgre6);
	suite_add_tcase(s, tcgre7);
	suite_add_tcase(s, tcgre8);
	suite_add_tcase(s, tcgre9);

	return s;
}

START_TEST(test_sub1)
{
	BigDouble* a = init_bigdouble("7");
	BigDouble* b = init_bigdouble("3");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "4");
}
END_TEST

START_TEST(test_sub2)
{
	BigDouble* a = init_bigdouble("10");
	BigDouble* b = init_bigdouble("3");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "7");
}
END_TEST

START_TEST(test_sub3)
{
	BigDouble* a = init_bigdouble("1000");
	BigDouble* b = init_bigdouble("30");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "970");
}
END_TEST

START_TEST(test_sub4)
{
	BigDouble* a = init_bigdouble("-100");
	BigDouble* b = init_bigdouble("3");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-103");
}
END_TEST

START_TEST(test_sub5)
{
	BigDouble* a = init_bigdouble("-100");
	BigDouble* b = init_bigdouble("-30");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-70");
}
END_TEST

START_TEST(test_sub6)
{
	BigDouble* a = init_bigdouble("0");
	BigDouble* b = init_bigdouble("-1");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "1");
}
END_TEST

START_TEST(test_sub7)
{
	BigDouble* a = init_bigdouble("-5");
	BigDouble* b = init_bigdouble("30");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-35");
}
END_TEST

START_TEST(test_sub8)
{
	BigDouble* a = init_bigdouble("0");
	BigDouble* b = init_bigdouble("-30");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "30");
}
END_TEST

START_TEST(test_sub9)
{
	BigDouble* a = init_bigdouble("0");
	BigDouble* b = init_bigdouble("0");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "0");
}
END_TEST

START_TEST(test_sub10)
{
	BigDouble* a = init_bigdouble("1000");
	BigDouble* b = init_bigdouble("990");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "10");
}
END_TEST

START_TEST(test_sub11)
{
	BigDouble* a = init_bigdouble("-1000");
	BigDouble* b = init_bigdouble("-990");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-10");
}
END_TEST

START_TEST(test_sub12)
{
	BigDouble* a = init_bigdouble("-9981723498712344");
	BigDouble* b = init_bigdouble("9827345987234897");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-19809069485947241");
}
END_TEST

START_TEST(test_sub13)
{
	BigDouble* a = init_bigdouble("99");
	BigDouble* b = init_bigdouble("999");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-900");
}
END_TEST

START_TEST(test_sub14)
{
	BigDouble* a = init_bigdouble(bigrandom3);
	BigDouble* b = init_bigdouble(bigrandom2);
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), bigrandom3minus2);
}
END_TEST

START_TEST(test_sub15)
{
	BigDouble* a = init_bigdouble("99");
	BigDouble* b = init_bigdouble("98");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "1");
}
END_TEST

START_TEST(test_sub16)
{
	BigDouble* a = init_bigdouble("-2937792036392928918943838972499543224227830922305574025623907512");
	BigDouble* b = init_bigdouble("5348865617868989585463128483377011802087714039676975740789171168");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-8286657654261918504406967455876555026315544961982549766413078680");
}

START_TEST(test_sub17)
{
	BigDouble* a = init_bigdouble("-5815727401975447390137557872393822662167680055481721257814268487");
	BigDouble* b = init_bigdouble("6634919500755768212321544000151996902040374316947990007139965389");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-12450646902731215602459101872545819564208054372429711264954233876");
}

START_TEST(test_sub18)
{
	BigDouble* a = init_bigdouble("7573128879883904383067820154252791981105217156002827304596498450");
	BigDouble* b = init_bigdouble("-7011364901849969874063134106661729914624943002356682638898924673");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "14584493781733874257130954260914521895730160158359509943495423123");
}

START_TEST(test_sub19)
{
	BigDouble* a = init_bigdouble("-6496976581445159933252902023317818196664933051369469259213975157");
	BigDouble* b = init_bigdouble("-9131845084725224448361068864299318145828253524102816314455980635");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "2634868503280064515108166840981499949163320472733347055242005478");
}

START_TEST(test_sub20)
{
	BigDouble* a = init_bigdouble("-6393971840574821621339839761851453721718773814138583056115961627");
	BigDouble* b = init_bigdouble("-4527574573407611491223111148359954903607383009345824337321289555");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-1866397267167210130116728613491498818111390804792758718794672072");
}

START_TEST(test_sub21)
{
	BigDouble* a = init_bigdouble("7325813394367990382534601984208015987703200626650652442783815221");
	BigDouble* b = init_bigdouble("-9579227579267515052578639051700154718460344695479383901898482595");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "16905040973635505435113241035908170706163545322130036344682297816");
}

START_TEST(test_sub22)
{
	BigDouble* a = init_bigdouble("4609821515525639416041260840310462137088394390138128955362771374");
	BigDouble* b = init_bigdouble("335985124046442745508105272412915247672298388846264486675460793");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "4273836391479196670533155567897546889416096001291864468687310581");
}

START_TEST(test_sub23)
{
	BigDouble* a = init_bigdouble("-3809400407289316139190366235311195379805117995450883008788418278");
	BigDouble* b = init_bigdouble("-7845983665487503283138113924667850262350169684624895964819274790");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "4036583258198187143947747689356654882545051689174012956030856512");
}

START_TEST(test_sub24)
{
	BigDouble* a = init_bigdouble("-4743624185915711878180114157664007690565681194777300371196354199");
	BigDouble* b = init_bigdouble("-4501880478723549053936768030495784812921313655089320988172613048");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-241743707192162824243346127168222877644367539687979383023741151");
}

START_TEST(test_sub25)
{
	BigDouble* a = init_bigdouble("4965638728962846239581113613961665241523429699358207266219402434");
	BigDouble* b = init_bigdouble("-9112156546578459378818183914589629708167953731111057252562602500");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "14077795275541305618399297528551294949691383430469264518782004934");
}

START_TEST(test_sub26)
{
	BigDouble* a = init_bigdouble("-7208677704228793917762337930467584229841259374085206849185828209");
	BigDouble* b = init_bigdouble("-7116826264338069899427753117983639570746629806613734670143519669");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-91851439890724018334584812483944659094629567471472179042308540");
}

START_TEST(test_sub27)
{
	BigDouble* a = init_bigdouble("-3801059590049212522758646447580268327886721692768081182621488740");
	BigDouble* b = init_bigdouble("-7272046185073894975882189325277418357904450683960613215677998253");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "3470986595024682453123542877697150030017728991192532033056509513");
}

START_TEST(test_sub28)
{
	BigDouble* a = init_bigdouble("-3447400515151655170201330344891541436157577201545533124425606198");
	BigDouble* b = init_bigdouble("-2810320939701582913434843793430641666129398179107683228097825743");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-637079575450072256766486551460899770028179022437849896327780455");
}

START_TEST(test_sub29)
{
	BigDouble* a = init_bigdouble("-9256045959859708330081671499674483617662895186524276999350536623");
	BigDouble* b = init_bigdouble("4170263965916818618365865525517919133265618197757959546122928260");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-13426309925776526948447537025192402750928513384282236545473464883");
}

START_TEST(test_sub30)
{
	BigDouble* a = init_bigdouble("-8863388677176006475070131311867423142212022729351871542261270812");
	BigDouble* b = init_bigdouble("3623189868643489129814386398639206866647996858232016730717503154");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-12486578545819495604884517710506630008860019587583888272978773966");
}

START_TEST(test_sub31)
{
	BigDouble* a = init_bigdouble("-5137718426645627595578777013683620743459216504854708605034418416");
	BigDouble* b = init_bigdouble("4157128025025372882405856219232075925721304965665328239768012073");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-9294846451671000477984633232915696669180521470520036844802430489");
}

START_TEST(test_sub32)
{
	BigDouble* a = init_bigdouble("-7412346989150389521109064372415982408835034268149889045719375424");
	BigDouble* b = init_bigdouble("-6936427583679001778244129166933557138874117370772646477716417610");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-475919405471387742864935205482425269960916897377242568002957814");
}

START_TEST(test_sub33)
{
	BigDouble* a = init_bigdouble("-2837730614095577417899795267907748398240964572936847678800009345");
	BigDouble* b = init_bigdouble("2609211788809329535586138044035482811062104075131328542425451843");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-5446942402904906953485933311943231209303068648068176221225461188");
}

START_TEST(test_sub34)
{
	BigDouble* a = init_bigdouble("-4832843225591243555744379616825869148443303702482241386967515270");
	BigDouble* b = init_bigdouble("4601648380831277609656149148262232718852961583292071557470815995");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-9434491606422521165400528765088101867296265285774312944438331265");
}

START_TEST(test_sub35)
{
	BigDouble* a = init_bigdouble("-7697479643351330997930872441830466326648632637593174042528236598");
	BigDouble* b = init_bigdouble("-4085380546039937143839476524399063428568575004695561267483295836");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-3612099097311393854091395917431402898080057632897612775044940762");
}

START_TEST(test_sub36)
{
	BigDouble* a = init_bigdouble("-2922815775227162544428264875280337786739269693961311707174377529");
	BigDouble* b = init_bigdouble("9275897622366543600918597129139282682561948197380340738572379633");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-12198713397593706145346862004419620469301217891341652445746757162");
}

START_TEST(test_sub37)
{
	BigDouble* a = init_bigdouble("-9958379615898650365054314267914158335870443633369095326662207617");
	BigDouble* b = init_bigdouble("2053266342844175726733086157368383566278360068277544101354298694");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-12011645958742826091787400425282541902148803701646639428016506311");
}

START_TEST(test_sub38)
{
	BigDouble* a = init_bigdouble("6043578785400145613883766074613781339557441464523603464734413615");
	BigDouble* b = init_bigdouble("-5408331771490349533765468421917122541298569903118026682916054036");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "11451910556890495147649234496530903880856011367641630147650467651");
}

START_TEST(test_sub39)
{
	BigDouble* a = init_bigdouble("8995629743767796645090280068416619144729977549196711815084435160");
	BigDouble* b = init_bigdouble("3188042730950632281093743515158438352180234556171206088825961236");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "5807587012817164363996536553258180792549742993025505726258473924");
}

START_TEST(test_sub40)
{
	BigDouble* a = init_bigdouble("-4378844706051686565692299767462476872383636588735270294229852231");
	BigDouble* b = init_bigdouble("9714745624546271416776500086730008744694661351338877682048941663");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-14093590330597957982468799854192485617078297940074147976278793894");
}

Suite* suite_6(void)
{
	Suite* s = suite_create("Subtraction");

	TCase *tcsub1, *tcsub2, *tcsub3, *tcsub4, *tcsub5, *tcsub6,
		*tcsub7, *tcsub8, *tcsub9, *tcsub10, *tcsub11,
		*tcsub12, *tcsub13, *tcsub14, *tcsub15, *tcsub16, 
		*tcsub17, *tcsub18, *tcsub19, *tcsub20, *tcsub21, 
		*tcsub22, *tcsub23, *tcsub24, *tcsub25, *tcsub26, 
		*tcsub27, *tcsub28, *tcsub29, *tcsub30, *tcsub31, 
		*tcsub32, *tcsub33, *tcsub34, *tcsub35, *tcsub36, 
		*tcsub37, *tcsub38, *tcsub39, *tcsub40;

	tcsub1 = tcase_create("test_sub1");
	tcsub2 = tcase_create("test_sub2");
	tcsub3 = tcase_create("test_sub3");
	tcsub4 = tcase_create("test_sub4");
	tcsub5 = tcase_create("test_sub5");
	tcsub6 = tcase_create("test_sub6");
	tcsub7 = tcase_create("test_sub7");
	tcsub8 = tcase_create("test_sub8");
	tcsub9 = tcase_create("test_sub9");
	tcsub10 = tcase_create("test_sub10");
	tcsub11 = tcase_create("test_sub11");
	tcsub12 = tcase_create("test_sub12");
	tcsub13 = tcase_create("test_sub13");
	tcsub14 = tcase_create("test_sub14");
	tcsub15 = tcase_create("test_sub15");
	tcsub16 = tcase_create("test_sub16");
	tcsub17 = tcase_create("test_sub17");
	tcsub18 = tcase_create("test_sub18");
	tcsub19 = tcase_create("test_sub19");
	tcsub20 = tcase_create("test_sub20");
	tcsub21 = tcase_create("test_sub21");
	tcsub22 = tcase_create("test_sub22");
	tcsub23 = tcase_create("test_sub23");
	tcsub24 = tcase_create("test_sub24");
	tcsub25 = tcase_create("test_sub25");
	tcsub26 = tcase_create("test_sub26");
	tcsub27 = tcase_create("test_sub27");
	tcsub28 = tcase_create("test_sub28");
	tcsub29 = tcase_create("test_sub29");
	tcsub30 = tcase_create("test_sub30");
	tcsub31 = tcase_create("test_sub31");
	tcsub32 = tcase_create("test_sub32");
	tcsub33 = tcase_create("test_sub33");
	tcsub34 = tcase_create("test_sub34");
	tcsub35 = tcase_create("test_sub35");
	tcsub36 = tcase_create("test_sub36");
	tcsub37 = tcase_create("test_sub37");
	tcsub38 = tcase_create("test_sub38");
	tcsub39 = tcase_create("test_sub39");
	tcsub40 = tcase_create("test_sub40");

	tcase_add_test(tcsub1, test_sub1);
	tcase_add_test(tcsub2, test_sub2);
	tcase_add_test(tcsub3, test_sub3);
	tcase_add_test(tcsub4, test_sub4);
	tcase_add_test(tcsub5, test_sub5);
	tcase_add_test(tcsub6, test_sub6);
	tcase_add_test(tcsub7, test_sub7);
	tcase_add_test(tcsub8, test_sub8);
	tcase_add_test(tcsub9, test_sub9);
	tcase_add_test(tcsub10, test_sub10);
	tcase_add_test(tcsub11, test_sub11);
	tcase_add_test(tcsub12, test_sub12);
	tcase_add_test(tcsub13, test_sub13);
	tcase_add_test(tcsub14, test_sub14);
	tcase_add_test(tcsub15, test_sub15);
	tcase_add_test(tcsub16, test_sub16);
	tcase_add_test(tcsub17, test_sub17);
	tcase_add_test(tcsub18, test_sub18);
	tcase_add_test(tcsub19, test_sub19);
	tcase_add_test(tcsub20, test_sub20);
	tcase_add_test(tcsub21, test_sub21);
	tcase_add_test(tcsub22, test_sub22);
	tcase_add_test(tcsub23, test_sub23);
	tcase_add_test(tcsub24, test_sub24);
	tcase_add_test(tcsub25, test_sub25);
	tcase_add_test(tcsub26, test_sub26);
	tcase_add_test(tcsub27, test_sub27);
	tcase_add_test(tcsub28, test_sub28);
	tcase_add_test(tcsub29, test_sub29);
	tcase_add_test(tcsub30, test_sub30);
	tcase_add_test(tcsub31, test_sub31);
	tcase_add_test(tcsub32, test_sub32);
	tcase_add_test(tcsub33, test_sub33);
	tcase_add_test(tcsub34, test_sub34);
	tcase_add_test(tcsub35, test_sub35);
	tcase_add_test(tcsub36, test_sub36);
	tcase_add_test(tcsub37, test_sub37);
	tcase_add_test(tcsub38, test_sub38);
	tcase_add_test(tcsub39, test_sub39);
	tcase_add_test(tcsub40, test_sub40);

	suite_add_tcase(s, tcsub1);
	suite_add_tcase(s, tcsub2);
	suite_add_tcase(s, tcsub3);
	suite_add_tcase(s, tcsub4);
	suite_add_tcase(s, tcsub5);
	suite_add_tcase(s, tcsub6);
	suite_add_tcase(s, tcsub7);
	suite_add_tcase(s, tcsub8);
	suite_add_tcase(s, tcsub9);
	suite_add_tcase(s, tcsub10);
	suite_add_tcase(s, tcsub11);
	suite_add_tcase(s, tcsub12);
	suite_add_tcase(s, tcsub13);
	suite_add_tcase(s, tcsub14);
	suite_add_tcase(s, tcsub15);
	suite_add_tcase(s, tcsub16);
	suite_add_tcase(s, tcsub17);
	suite_add_tcase(s, tcsub18);
	suite_add_tcase(s, tcsub19);
	suite_add_tcase(s, tcsub20);
	suite_add_tcase(s, tcsub21);
	suite_add_tcase(s, tcsub22);
	suite_add_tcase(s, tcsub23);
	suite_add_tcase(s, tcsub24);
	suite_add_tcase(s, tcsub25);
	suite_add_tcase(s, tcsub26);
	suite_add_tcase(s, tcsub27);
	suite_add_tcase(s, tcsub28);
	suite_add_tcase(s, tcsub29);
	suite_add_tcase(s, tcsub30);
	suite_add_tcase(s, tcsub31);
	suite_add_tcase(s, tcsub32);
	suite_add_tcase(s, tcsub33);
	suite_add_tcase(s, tcsub34);
	suite_add_tcase(s, tcsub35);
	suite_add_tcase(s, tcsub36);
	suite_add_tcase(s, tcsub37);
	suite_add_tcase(s, tcsub38);
	suite_add_tcase(s, tcsub39);
	suite_add_tcase(s, tcsub40);

	return s;
}



START_TEST(test_swap1)
{
	BigDouble* a = init_bigdouble("123");
	BigDouble* b = init_bigdouble("4565");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "4688");
	ck_assert_str_eq(bigdouble_str(b), "4565");
}

START_TEST(test_swap2)
{
	BigDouble* a = init_bigdouble("123");
	BigDouble* b = init_bigdouble("4565");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-4442");
	ck_assert_str_eq(bigdouble_str(b), "4565");
}

START_TEST(test_swap3)
{
	BigDouble* a = init_bigdouble("123");
	BigDouble* b = init_bigdouble("4565");
	bigdouble_cmp(a, "<", b);
	ck_assert_str_eq(bigdouble_str(a), "123");
	ck_assert_str_eq(bigdouble_str(b), "4565");
}

START_TEST(test_swap4)
{
	BigDouble* a = init_bigdouble("123");
	BigDouble* b = init_bigdouble("4565");
	bigdouble_cmp(a, ">", b);
	ck_assert_str_eq(bigdouble_str(a), "123");
	ck_assert_str_eq(bigdouble_str(b), "4565");
}

START_TEST(test_swap5)
{
	BigDouble* a = init_bigdouble("123");
	BigDouble* b = init_bigdouble("4565");
	bigdouble_cmp(a, "==", b);
	ck_assert_str_eq(bigdouble_str(a), "123");
	ck_assert_str_eq(bigdouble_str(b), "4565");
}

START_TEST(test_swap6)
{
	BigDouble* a = init_bigdouble("4565");
	BigDouble* b = init_bigdouble("123");
	bigdouble_cmp(a, "==", b);
	ck_assert_str_eq(bigdouble_str(a), "4565");
	ck_assert_str_eq(bigdouble_str(b), "123");
}

START_TEST(test_swap7)
{
	BigDouble* a = init_bigdouble("1.1");
	BigDouble* b = init_bigdouble("1");
	_bigdouble_is_eq(a, b);
	ck_assert_str_eq(bigdouble_str(a), "1.1");
	ck_assert_str_eq(bigdouble_str(b), "1");
}

START_TEST(test_swap8)
{
	BigDouble* a = init_bigdouble("1.0");
	BigDouble* b = init_bigdouble("1");
	_bigdouble_is_eq(a, b);
	ck_assert_str_eq(bigdouble_str(a), "1.0");
	ck_assert_str_eq(bigdouble_str(b), "1");
}

START_TEST(test_swap9)
{
	BigDouble* a = init_bigdouble("-123");
	BigDouble* b = init_bigdouble("-443");
	bigdouble_cmp(a, "<" ,b);
	ck_assert_str_eq(bigdouble_str(a), "-123");
	ck_assert_str_eq(bigdouble_str(b), "-443");
}

Suite* suite_7(void)
{
	// For tests that swap bigdoubles around
	Suite* s = suite_create("Swapping Tests");

	TCase *tcswap1, *tcswap2, *tcswap3,
			*tcswap4, *tcswap5, *tcswap6,
			*tcswap7, *tcswap8, *tcswap9;

	tcswap1 = tcase_create("test_swap1");
	tcswap2 = tcase_create("test_swap2");
	tcswap3 = tcase_create("test_swap3");
	tcswap4 = tcase_create("test_swap4");
	tcswap5 = tcase_create("test_swap5");
	tcswap6 = tcase_create("test_swap6");
	tcswap7 = tcase_create("test_swap7");
	tcswap8 = tcase_create("test_swap8");
	tcswap9 = tcase_create("test_swap9");

	tcase_add_test(tcswap1, test_swap1);
	tcase_add_test(tcswap2, test_swap2);
	tcase_add_test(tcswap3, test_swap3);
	tcase_add_test(tcswap4, test_swap4);
	tcase_add_test(tcswap5, test_swap5);
	tcase_add_test(tcswap6, test_swap6);
	tcase_add_test(tcswap7, test_swap7);
	tcase_add_test(tcswap8, test_swap8);
	tcase_add_test(tcswap9, test_swap9);

	suite_add_tcase(s, tcswap1);
	suite_add_tcase(s, tcswap2);
	suite_add_tcase(s, tcswap3);
	suite_add_tcase(s, tcswap4);
	suite_add_tcase(s, tcswap5);
	suite_add_tcase(s, tcswap6);
	suite_add_tcase(s, tcswap7);
	suite_add_tcase(s, tcswap8);
	suite_add_tcase(s, tcswap9);

	/*


						TEST A RESIZE



	*/

	return s;
}


int main(int argc, char** argv)
{
	int failed;
	SRunner* sr1, *sr2, *sr3, *sr4, *sr5, *sr6,
			*sr7;

	Suite* s1 = suite_1();
	Suite* s2 = suite_2();
	Suite* s3 = suite_3();
	Suite* s4 = suite_4();
	Suite* s5 = suite_5();
	Suite* s6 = suite_6();
	Suite* s7 = suite_7();

	sr1 = srunner_create(s1);
	sr2 = srunner_create(s2);
	sr3 = srunner_create(s3);
	sr4 = srunner_create(s4);
	sr5 = srunner_create(s5);
	sr6 = srunner_create(s6);
	sr7 = srunner_create(s7);

	srunner_run_all(sr1, CK_NORMAL);
	failed = srunner_ntests_failed(sr1);
	srunner_free(sr1);

	srunner_run_all(sr2, CK_NORMAL);
	failed += srunner_ntests_failed(sr2);
	srunner_free(sr2);

	srunner_run_all(sr3, CK_NORMAL);
	failed += srunner_ntests_failed(sr3);
	srunner_free(sr3);

	srunner_run_all(sr4, CK_NORMAL);
	failed += srunner_ntests_failed(sr4);
	srunner_free(sr4);

	srunner_run_all(sr5, CK_NORMAL);
	failed += srunner_ntests_failed(sr5);
	srunner_free(sr5);

	srunner_run_all(sr6, CK_NORMAL);
	failed += srunner_ntests_failed(sr6);
	srunner_free(sr6);

	srunner_run_all(sr7, CK_NORMAL);
	failed += srunner_ntests_failed(sr7);
	srunner_free(sr7);

	return failed;

}
