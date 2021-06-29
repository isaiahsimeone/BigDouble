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

START_TEST(test_inc18)
{
	BigDouble* b = init_bigdouble("-5425234523");
	bigdouble_inc(b);
	ck_assert_str_eq(bigdouble_str(b), "-5425234522");
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

START_TEST(test_dec20)
{
	BigDouble* b = init_bigdouble("-5");
	bigdouble_dec(b);
	ck_assert_str_eq(bigdouble_str(b), "-6");
}
END_TEST

Suite* suite_2(void)
{
	Suite* s = suite_create("Increment/Decrement");

	/* Incrementing & Decrementing BigDouble */

	TCase *tci1, *tci2, *tci3, *tci4, *tci5,
		*tci6, *tci7, *tci8, *tci9, *tci10,
		*tci11, *tci12, *tci13, *tci14, *tci15,
		*tci16, *tci17, *tci18;
	TCase *tcd1, *tcd2, *tcd3, *tcd4, *tcd5,
		*tcd6, *tcd7, *tcd8, *tcd9, *tcd10,
		*tcd11, *tcd12, *tcd13, *tcd14, *tcd15,
		*tcd16, *tcd17, *tcd18, *tcd19, *tcd20;

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
	tci18 = tcase_create("test_inc18");
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
	tcd20 = tcase_create("test_dec20");

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
	tcase_add_test(tci18, test_inc18);
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
	tcase_add_test(tcd20, test_dec20);

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
	suite_add_tcase(s, tcd20);

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
	bigdouble_add(a, b);
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

START_TEST(test_add60)
{
	BigDouble* a = init_bigdouble("-3920601892695.724702552344809704716367090406925647636217");
	BigDouble* b = init_bigdouble("-44470531789643.997245793517747821002122672590944412709697");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-48391133682339.721948345862557525718489762997870060345914");
}

START_TEST(test_add61)
{
	BigDouble* a = init_bigdouble("37477468598674.586430348258583963624349476845445284547379");
	BigDouble* b = init_bigdouble("-28338096143251.227988503955972126585737741664102390764431");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "9139372455423.358441844302611837038611735181342893782948");
}

START_TEST(test_add62)
{
	BigDouble* a = init_bigdouble("20239204288771.99359259201791406788178131079853217381945");
	BigDouble* b = init_bigdouble("703039677446.934338200081588437261926357684769875945751");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "20942243966218.927930792099502505143707668483302049765201");
}

START_TEST(test_add63)
{
	BigDouble* a = init_bigdouble("60881198365649.913369224033443055612409188186804230956972");
	BigDouble* b = init_bigdouble("9800829746961.924407986244499645814941588111060414067890");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "70682028112611.837777210277942701427350776297864645024862");
}

START_TEST(test_add64)
{
	BigDouble* a = init_bigdouble("68139716843781.755831272018452827922375099892256169522929");
	BigDouble* b = init_bigdouble("-91432678242234.821467739209514434788152733245323612417740");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-23292961398453.065636467191061606865777633353067442894811");
}

START_TEST(test_add65)
{
	BigDouble* a = init_bigdouble("-9720788094281.403800222487515082704105096760351311449835");
	BigDouble* b = init_bigdouble("-80707655977565.424613633565953820087460784051122223040664");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-90428444071846.828413856053468902791565880811473534490499");
}

START_TEST(test_add66)
{
	BigDouble* a = init_bigdouble("-80300878152099.563117919295024259961113531048900453534773");
	BigDouble* b = init_bigdouble("-87117273062175.25744340740064487713143201219966620696744");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-167418151214274.820561326695669137092545543248566660502213");
}

START_TEST(test_add67)
{
	BigDouble* a = init_bigdouble("-64634386409862.323102327041832977225464881879730025567498");
	BigDouble* b = init_bigdouble("-39782384277332.451812916576156163068644749259930499118083");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-104416770687194.774915243617989140294109631139660524685581");
}

START_TEST(test_add68)
{
	BigDouble* a = init_bigdouble("68980125142638.981258556915949204532976244015116623695027");
	BigDouble* b = init_bigdouble("28576897445215.258096895749773887013956145222487032402392");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "97557022587854.239355452665723091546932389237603656097419");
}

START_TEST(test_add69)
{
	BigDouble* a = init_bigdouble("-47484363009226.27443226484958410905934705937177194967836");
	BigDouble* b = init_bigdouble("-22130104991199.37863581051682868212376824840047033205115");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-69614468000425.65306807536641279118311530777224228172951");
}

START_TEST(test_add70)
{
	BigDouble* a = init_bigdouble("59477350372559.44781847933405900435911741539253499134664");
	BigDouble* b = init_bigdouble("20180331858036.314494193105960035364422408291895455996533");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "79657682230595.762312672440019039723539823684430447343173");
}

START_TEST(test_add71)
{
	BigDouble* a = init_bigdouble("-44373304513364.898071003110472966597265597638310463479168");
	BigDouble* b = init_bigdouble("25706776177646.727334957448762384569805052917340782678263");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-18666528335718.170736045661710582027460544720969680800905");
}

START_TEST(test_add72)
{
	BigDouble* a = init_bigdouble("47950461683766.209004326942525581854814979202274458900720");
	BigDouble* b = init_bigdouble("-27948063090797.701707250089920951927140017953347118028862");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "20002398592968.507297076852604629927674961248927340871858");
}

START_TEST(test_add73)
{
	BigDouble* a = init_bigdouble("58310010222933.617358856089736520888102939464748312808126");
	BigDouble* b = init_bigdouble("4562083877473.556982454414148356097275078837771944782842");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "62872094100407.174341310503884876985378018302520257590968");
}

START_TEST(test_add74)
{
	BigDouble* a = init_bigdouble("13404521247167.343108744739336211477106474396115917374");
	BigDouble* b = init_bigdouble("-5719800196798.117491588637385968454337018934353471710994");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "7684721050369.225617156101950243022769455461762445663006000000000000000000000000000000000000");
}

START_TEST(test_add75)
{
	BigDouble* a = init_bigdouble("86934635871772.210877272461691716196431417411661586207437");
	BigDouble* b = init_bigdouble("62863538894579.519100523947676526787064322520171301081165");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "149798174766351.729977796409368242983495739931832887288602");
}

START_TEST(test_add76)
{
	BigDouble* a = init_bigdouble("-95048652113692.523390110412536286137052831048100688042325");
	BigDouble* b = init_bigdouble("-44428748417250.267016060346781868243241286473328655189929");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-139477400530942.790406170759318154380294117521429343232254");
}

START_TEST(test_add77)
{
	BigDouble* a = init_bigdouble("-16921357794446.234172544193110229865616441780526800796671");
	BigDouble* b = init_bigdouble("56997645899491.671897850914719951535712889339621690576376");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "40076288105045.437725306721609721670096447559094889779705");
}

START_TEST(test_add78)
{
	BigDouble* a = init_bigdouble("94505690983869.142075234456124123436526059079792078004033");
	BigDouble* b = init_bigdouble("-7025048595690.390429417338621356833767218615035111960666");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "87480642388178.751645817117502766602758840464756966043367");
}										

START_TEST(test_add79)
{
	BigDouble* a = init_bigdouble("13200049679807.989539990921730099197805121000121587788967");
	BigDouble* b = init_bigdouble("-68552009553886.143568227687558642889466382929016132176213");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-55351959874078.154028236765828543691661261928894544387246");
}

START_TEST(test_add80)
{
	BigDouble* a = init_bigdouble("-36860074575972.608192006639316298958341495217892570038914");
	BigDouble* b = init_bigdouble("-12769707323185.706319274111951458285636695811788257742660");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-49629781899158.314511280751267757243978191029680827781574");
}										

START_TEST(test_add81)
{
	BigDouble* a = init_bigdouble("-5298028847315.618167129453374653035771565832496198948623");
	BigDouble* b = init_bigdouble("81616368609167.196104728009191393972845617224515306022090");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "76318339761851.577937598555816740937074051392019107073467");
} 

START_TEST(test_add82)
{
	BigDouble* a = init_bigdouble("-56824727650986.472150832093867889166899500977514985854370");
	BigDouble* b = init_bigdouble("95923346823718.62326093596699253762735353778924682007072");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "39098619172732.1511101038731246484604540368117318342163500000000000000000000000000000000000000000");
}

START_TEST(test_add83)
{
	BigDouble* a = init_bigdouble("-28407045572220.924986999206096518369244446064245879945344");
	BigDouble* b = init_bigdouble("-85776038114532.451325144064441370501008615927849552385678");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-114183083686753.376312143270537888870253061992095432331022");
}										

START_TEST(test_add84)
{
	BigDouble* a = init_bigdouble("-15603764385340.49906588036709304712581287541544616514652");
	BigDouble* b = init_bigdouble("98193473545645.753720882459166832659682673434880976687327");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "82589709160305.254655002092073785533869798019434811540807");
}

START_TEST(test_add85)
{
	BigDouble* a = init_bigdouble("-89057054452878.154376078747834986910561573937791764087338");
	BigDouble* b = init_bigdouble("43854323617903.795095409587879948603767202853658468693904");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-45202730834974.359280669159955038306794371084133295393434");
}

START_TEST(test_add86)
{
	BigDouble* a = init_bigdouble("-56131206028641.746122200383412607324291975954110154390674");
	BigDouble* b = init_bigdouble("-762506926860.877900667686042679958840364750025735453145");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-56893712955502.624022868069455287283132340704135889843819");
}										

START_TEST(test_add87)
{
	BigDouble* a = init_bigdouble("99076254927038.355460454514093995503605335314794895213529");
	BigDouble* b = init_bigdouble("-32590211333915.193744451651189579589662077080974872409275");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "66486043593123.161716002862904415913943258233820022804254");
}

START_TEST(test_add88)
{
	BigDouble* a = init_bigdouble("-93247706302839.458801334650289850782580483353074660026930");
	BigDouble* b = init_bigdouble("-5493306127090.614855379624201564723022657169950515752192");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-98741012429930.073656714274491415505603140523025175779122");
}										

START_TEST(test_add89)
{
	BigDouble* a = init_bigdouble("-1330655611529.111322492248665627027840982291274744527342");
	BigDouble* b = init_bigdouble("-49102155844331.889610789717716583782779094434471979499692");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-50432811455861.000933281966382210810620076725746724027034");
}

START_TEST(test_add90)
{
	BigDouble* a = init_bigdouble("-14956431182145.671392093723811090373417742039632168778768");
	BigDouble* b = init_bigdouble("-36348560049232.867545223110973899671596580224783757255831");
	bigdouble_add(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-51304991231378.538937316834784990045014322264415926034599");
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
		*tca56, *tca57, *tca58, *tca59, *tca60, 
		*tca61, *tca62, *tca63, *tca64, *tca65, 
		*tca66, *tca67, *tca68, *tca69, *tca70, 
		*tca71, *tca72, *tca73, *tca74, *tca75, 
		*tca76, *tca77, *tca78, *tca79, *tca80, 
		*tca81, *tca82, *tca83, *tca84, *tca85, 
		*tca86, *tca87, *tca88, *tca89, *tca90;

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
	tca60 = tcase_create("test_add60");
	tca61 = tcase_create("test_add61");
	tca62 = tcase_create("test_add62");
	tca63 = tcase_create("test_add63");
	tca64 = tcase_create("test_add64");
	tca65 = tcase_create("test_add65");
	tca66 = tcase_create("test_add66");
	tca67 = tcase_create("test_add67");
	tca68 = tcase_create("test_add68");
	tca69 = tcase_create("test_add69");
	tca70 = tcase_create("test_add70");
	tca71 = tcase_create("test_add71");
	tca72 = tcase_create("test_add72");
	tca73 = tcase_create("test_add73");
	tca74 = tcase_create("test_add74");
	tca75 = tcase_create("test_add75");
	tca76 = tcase_create("test_add76");
	tca77 = tcase_create("test_add77");
	tca78 = tcase_create("test_add78");
	tca79 = tcase_create("test_add79");
	tca80 = tcase_create("test_add80");
	tca81 = tcase_create("test_add81");
	tca82 = tcase_create("test_add82");
	tca83 = tcase_create("test_add83");
	tca84 = tcase_create("test_add84");
	tca85 = tcase_create("test_add85");
	tca86 = tcase_create("test_add86");
	tca87 = tcase_create("test_add87");
	tca88 = tcase_create("test_add88");
	tca89 = tcase_create("test_add89");
	tca90 = tcase_create("test_add90");

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
	tcase_add_test(tca60, test_add60);
	tcase_add_test(tca61, test_add61);
	tcase_add_test(tca62, test_add62);
	tcase_add_test(tca63, test_add63);
	tcase_add_test(tca64, test_add64);
	tcase_add_test(tca65, test_add65);
	tcase_add_test(tca66, test_add66);
	tcase_add_test(tca67, test_add67);
	tcase_add_test(tca68, test_add68);
	tcase_add_test(tca69, test_add69);
	tcase_add_test(tca70, test_add70);
	tcase_add_test(tca71, test_add71);
	tcase_add_test(tca72, test_add72);
	tcase_add_test(tca73, test_add73);
	tcase_add_test(tca74, test_add74);
	tcase_add_test(tca75, test_add75);
	tcase_add_test(tca76, test_add76);
	tcase_add_test(tca77, test_add77);
	tcase_add_test(tca78, test_add78);
	tcase_add_test(tca79, test_add79);
	tcase_add_test(tca80, test_add80);
	tcase_add_test(tca81, test_add81);
	tcase_add_test(tca82, test_add82);
	tcase_add_test(tca83, test_add83);
	tcase_add_test(tca84, test_add84);
	tcase_add_test(tca85, test_add85);
	tcase_add_test(tca86, test_add86);
	tcase_add_test(tca87, test_add87);
	tcase_add_test(tca88, test_add88);
	tcase_add_test(tca89, test_add89);
	tcase_add_test(tca90, test_add90);

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
	suite_add_tcase(s, tca60);
	suite_add_tcase(s, tca61);
	suite_add_tcase(s, tca62);
	suite_add_tcase(s, tca63);
	suite_add_tcase(s, tca64);
	suite_add_tcase(s, tca65);
	suite_add_tcase(s, tca66);
	suite_add_tcase(s, tca67);
	suite_add_tcase(s, tca68);
	suite_add_tcase(s, tca69);
	suite_add_tcase(s, tca70);
	suite_add_tcase(s, tca71);
	suite_add_tcase(s, tca72);
	suite_add_tcase(s, tca73);
	suite_add_tcase(s, tca74);
	suite_add_tcase(s, tca75);
	suite_add_tcase(s, tca76);
	suite_add_tcase(s, tca77);
	suite_add_tcase(s, tca78);
	suite_add_tcase(s, tca79);
	suite_add_tcase(s, tca80);
	suite_add_tcase(s, tca81);
	suite_add_tcase(s, tca82);
	suite_add_tcase(s, tca83);
	suite_add_tcase(s, tca84);
	suite_add_tcase(s, tca85);
	suite_add_tcase(s, tca86);
	suite_add_tcase(s, tca87);
	suite_add_tcase(s, tca88);
	suite_add_tcase(s, tca89);
	suite_add_tcase(s, tca90);

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

START_TEST(test_eq21)
{
	BigDouble* a = init_bigdouble("0.0");
	BigDouble* b = init_bigdouble("0");
	ck_assert_int_eq(bigdouble_cmp(a, "==", b), 1);
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

START_TEST(test_le15)
{
	BigDouble* a = init_bigdouble("65.41235126234624145153252346234623777472341613");
	BigDouble* b = init_bigdouble("-46.13453452362362413512352512");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}
END_TEST

START_TEST(test_le16)
{
	BigDouble* a = init_bigdouble("65");
	BigDouble* b = init_bigdouble("-46.1234123412341234123412423");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}
END_TEST

START_TEST(test_le17)
{
	BigDouble* a = init_bigdouble("0.1234214341");
	BigDouble* b = init_bigdouble("0");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}
END_TEST

START_TEST(test_le18)
{
	BigDouble* a = init_bigdouble("0");
	BigDouble* b = init_bigdouble("0.21341");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}
END_TEST

START_TEST(test_le19)
{
	BigDouble* a = init_bigdouble("-99019350023119629610247973096181737576009759942127301676302773062332679366759300682043104.14755121711355808800158818970674824452833048048689311645012187203689726861454936570901385615418892138");
	BigDouble* b = init_bigdouble("8027682271529330219865636333580423448344538843544595525792597904401648033549135634106434.80310690516324658589684074602388598158340529167983207953261339400910299921995685142799994294043");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le20)
{
	BigDouble* a = init_bigdouble("56609700309774372171577118086064294012994379430119218201787894507864715934338134277934601.42437227329671307041214510054612572478705224393104462205449689710709792946630868028346288023551152051");
	BigDouble* b = init_bigdouble("43591510437857956317140131001380509446322207544199848225331409663518952427408645795141605.61157991571933778690468049281348010723816686327809646314561157528725335711900302058820538519447");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le21)
{
	BigDouble* a = init_bigdouble("-34553599641380296872901322856375256632721667432791634736567140018154980779848942528576910.28199387939615736940821010883138836938185853280371301168597363705384198241185770211701376250490420430");
	BigDouble* b = init_bigdouble("54389003307624859916901399309543066598762450507702218044559487528424471229098929034712789.208970940699536243692167650813226675016857713030389551862709302378496528601093286174382814212");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le22)
{
	BigDouble* a = init_bigdouble("85583682082867163573484806596265710775182711154609136853363677256342843100447633200885349.96795667414637578082199169369525512511962566899429026818740509037133372616727032265563793394903408719");
	BigDouble* b = init_bigdouble("-58890622607056661166118522314729304717491565029579390922057575130082760828879547775632853.83887301697655192028086823355673682480738233263522849602597377651117137259049661454991305411365");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le23)
{
	BigDouble* a = init_bigdouble("-27561378507767422150300822537869978295720170081940756547571945670138751210664433325297261.33098283468912155080300785051981324691763526356587657864773805820269663134467777778562140437387079178");
	BigDouble* b = init_bigdouble("-62570646646476818787392361403569174338655248379731808645964981273104759967112063653015275.20500281177128619241420046029772814060678546247382151952275367319316131661464692082477947209607");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le24)
{
	BigDouble* a = init_bigdouble("8856494594186455792819838609717580481033492271543629231609679226409709380950885264624312.61670647175671999789337306890502640988230296144434369560010416922189039614541446161851412882758452637");
	BigDouble* b = init_bigdouble("-84865719733805279177170003235362666665135659698854143600255302014800717820516078333956274.28270496885490557931873426737890967779781452725955757455114009172144009236278508236554609257011");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le25)
{
	BigDouble* a = init_bigdouble("26211990310179774489220349908835786767831444365693291252826034179681097892744357218004889.43560114063995495403359304011600059570251792219941331424637514972644174701224828823203953849974347213");
	BigDouble* b = init_bigdouble("99796928902898732724803212104159287107625580213777760068804296905330246729369909668710022.27225402901182807386718879009247645701038157973542677692049698266962197253824104354140560364297");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le26)
{
	BigDouble* a = init_bigdouble("57437876682100201533225945241452219933666780825340370548484103910350177997285058565126452.68947243898720998936677261716628832653995048075942731186291676215289606567654655532415241427524931994");
	BigDouble* b = init_bigdouble("-72095810976561148586607595266869409234853753107424328399741112318183590369873410851671552.41262493033824027117657213932729797143936642416899105159711122783224579755249396094917747803686");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le27)
{
	BigDouble* a = init_bigdouble("67124980322084676063012410562869268197211505537807773815068889591329582597880343152237794.30912013072615378377144797434981648271726860656976831422861088916854191810781244478035788176415338751");
	BigDouble* b = init_bigdouble("-67763642934015670519986350821369288619923186155041328246826581886587485513589144221161911.32934227251840087101846979409036341495552592606527671165588004789849627255852821947412384339458");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le28)
{
	BigDouble* a = init_bigdouble("-95654427867286548096782744440825940284282544153700414465102739842478691809993146815969764.86878381004416503692521214148112452834328798390300091383695570715738191901144689342839933462256493112");
	BigDouble* b = init_bigdouble("83630731325011377945464189805423548073379888237709508582873819995008012568090526557351910.2121019274695402145549060922715143919540542444294592895838242647884835639225111763400273825316");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le29)
{
	BigDouble* a = init_bigdouble("-52013393178483709748834068561132992306814048703901265936330499433081268733529569318853425.63202913356143684893916359373195337509768454735527520487319340832141231668146402624706734621540645032");
	BigDouble* b = init_bigdouble("-47189550363188889619053755776906278256351575156726028865363479908093962740617303716898330.44470394573512132676136986650891889119629061853591048958297063926105912765700168354486227603089");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le30)
{
	BigDouble* a = init_bigdouble("-50361550943380158331305508992666469408344727473003522147615075298501658464962716947351900.54820318173639989039488057224267662139858079985018158699924762780427499817392491048086581488621629596");
	BigDouble* b = init_bigdouble("-78774649305433361137792845083020525081658150215085168054313175009026918588131065973242385.23042361792585164164901752789042358139980740676579498536634907477577525586692767173533152618126");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le31)
{
	BigDouble* a = init_bigdouble("77973535203096177133421110004819550713381942555466304062798836126041569254597575386417267.67233476072444346453887535898320706647087903184153046926623490628425250276892218811811164075327735032");
	BigDouble* b = init_bigdouble("-87637492261400169494240476816886131333555662802559468273062771986560729504356808197283056.95791454963262952666348408580835197493566447831059326570329693439168983029719934004943700235403");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le32)
{
	BigDouble* a = init_bigdouble("-45689998662054393995451947230809541434507985850387271150149001911015917351626341413508385.54318707283184446811451252970558612399431839816914363161182298175977711650487700476127134575601727113");
	BigDouble* b = init_bigdouble("-98690574265300459975219648876610287455251463240569681446227433861721408115522782578015267.10650063619647070780080904614871103754227100362307439315221166325452140369429308586656935612744");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le33)
{
	BigDouble* a = init_bigdouble("-25814719752677973699809805412173649690540093428598311581260102634263937207257046046950338.9351832686738846901570223121739250156834663266729464502129968662484279588023406177734449101020062126");
	BigDouble* b = init_bigdouble("61898814497842572879073534148038448841085096110157767413041502265200892010908925099779085.6766927495161010018740927631643472532846303439146115564609523290262147233279939707777740014260");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le34)
{
	BigDouble* a = init_bigdouble("3369966519888531036490295636062083821419196407365288442089633772209598489364919627821632.5604724684678221750899221989458428834298162329007259301718501487430121963850598104665377231279170487");
	BigDouble* b = init_bigdouble("12602134344144086896028828675435287973451683915051144582961445752495322286167415630962528.84056353717665009100951030257599469196153509587237945245244226827253733458323692932728476027618");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le35)
{
	BigDouble* a = init_bigdouble("-16955085461071816239949417563009678117633129349596647014978294563692534270150388422071117.89081960197511398080248257500937104482714209514379821990062233850828286590249253897094504992855685245");
	BigDouble* b = init_bigdouble("85642027500235688297549854860351190222538400144633799727011508300311974701628688788206496.97639929772008259173096261907471034231827861431856585973648407370290733543421624512348855356851");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le36)
{
	BigDouble* a = init_bigdouble("-79801900787487623696659842286043537576795418046960354519107384598628931439985325942814392.73174151593719214740558016719633999010085574234555677605659592287659284315370056345921277156533310754");
	BigDouble* b = init_bigdouble("75668232712553954143742284499531122426264579668627645493422422389281869525565524461084412.92254867469910430425674830543899185762766765855362489006265474861125565665517944715025784223618");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le37)
{
	BigDouble* a = init_bigdouble("-93074678509950727036952081290504017007098209345500150631076570644091046969555788677510077.14796424350715881225482884360087667695634353459567492299128182682482532724557000237860502084828765176");
	BigDouble* b = init_bigdouble("-63320715560164830189137566802190266465043451246270693332993083400861721371251028892068211.59151708271299150475072733540450411729110992306405664588191900962453294133167889265854322837701");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le38)
{
	BigDouble* a = init_bigdouble("64662861878404833299754006221929368635510602914829033696194355054561459505559640753520336.12073107127593632459430855131164519307420704474458577050922866991137572298299278330128979562325616243");
	BigDouble* b = init_bigdouble("83845677874709105621261725692172368217442635021903809396476225845691782173613675920613247.80422163494594559993109813929379006597993813364118339545494617119751192412628101758468931209432");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le39)
{
	BigDouble* a = init_bigdouble("17126695275739893115654632805975135203224228782544648802724475835528298881595997241447477.27012686963283436552574133034320436277673696064162101115992098603853389615112921212850711346913382585");
	BigDouble* b = init_bigdouble("46244032168165114273825274568992032116449840485662946981018535240834418758787484316910287.42913951028167622887055651650656113047260192235388862488866562811102876815339471243310747122435");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le40)
{
	BigDouble* a = init_bigdouble("-30763106823412515910078126502830071217549947991374842029646201327601342527120080885182893.89134001105255123017445296132593987745240934547191022535566184952297826238062161951333819009171096446");
	BigDouble* b = init_bigdouble("74993882500450209356760109619388315975945549608858161086532351191094118839654909082849329.45681906946981754292656894655956820032039102209204056570142044775995882818643274393114124104086");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le41)
{
	BigDouble* a = init_bigdouble("-66384717219488436656936786314111658419836742976082305843753260318616629666100874976147748.81404535735575112906285388279170209295940540737752519705091487131579077350115006350085429032170925895");
	BigDouble* b = init_bigdouble("50807489433792335960846503685316032169270362848151787791157150471427549021781334577759973.90930971850801714723906804469606130132132538002482849251935904841348224343304063098001819590134");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le42)
{
	BigDouble* a = init_bigdouble("53912994752950912765368618146324689446520455146218629565060324456419180278891288150257190.40119925129233777285299399958664550466858758836034707761639651457134234319787626899757988595656078852");
	BigDouble* b = init_bigdouble("-1481943422600450225068039995681346841585409720132570542673334366393670476886717437688583.77670136060004482120126030903526671772760122825840422336124965392269603470386509115807173573118");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le43)
{
	BigDouble* a = init_bigdouble("91673987868641745563033461565322601093229786586151609892713620142796587650731816960311561.38016964804572401232223629359482267894393967650363625852471445122232721884269442059598730025234072883");
	BigDouble* b = init_bigdouble("46850736647126809408447195781752031541854650341073253419935450058400506843710446299574179.38035884276884676126011956733846218911376709361352647179887662228140509381910162239593698550497");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le44)
{
	BigDouble* a = init_bigdouble("40767946433964253826456225288440326372554579639288364310940595180783801113684374152398073.15568393401181438818687026679859317835085914671564467709242049790764957530416348622218522025391139037");
	BigDouble* b = init_bigdouble("16862382987397145037064237004293295665478647021008174587437626341344848944244605205779847.52611762836445974682553148741089392361192432064308664038883919844497650863974908224885303651874");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le45)
{
	BigDouble* a = init_bigdouble("-55859583095046278635450446132627238315852075366658828350025417530325786408607155893889353.13982353139412816464321100656266500524998463468782937749474193881182117744055271380173105526353295602");
	BigDouble* b = init_bigdouble("-7531314094117882296196009302031767588280023758609252582024684778678835678583988310990007.92049383865425124720616167914723382590683921619288929202725816854740506891871720668670796421826");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le46)
{
	BigDouble* a = init_bigdouble("-93610757067371982566021099108538329433044835298217511011926143263227723606303018947124280.20702315478181206075169908263404462916904440335466620145711200414391301635352128426699421800011444656");
	BigDouble* b = init_bigdouble("60780864490003416427733705772939641597690963992028028655666822821017775481657036909482600.21595619755903710004220729855442370176098885026651004206191763270447246023220666259447470083310");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le47)
{
	BigDouble* a = init_bigdouble("-80847385835801301779376024629100831203760143034805087838076998482389267002711374260636368.71375197777468810983552804995976641824926067342876305472699642362999861172083787880606909869168842477");
	BigDouble* b = init_bigdouble("-45582945939132975735486182958325497799713698452057888444963385017912942131889951220313085.8245627535469140185641066409436304511943041581204100297568368470312735243260249963984495269264");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le48)
{
	BigDouble* a = init_bigdouble("-72142732635838665496769731293944361906361690509164585231918445854260293226045953272215794.31895652946962801170323203095063766259933375654718370189384659063340299476775355573285792025930087179");
	BigDouble* b = init_bigdouble("78754791515551842687244021610896322123924697990749205304235232362335254257227409532048928.15416992707405651251571269510233372368782096324983634087942828806342021018790427849140813759108");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le49)
{
	BigDouble* a = init_bigdouble("-37379648470489366420485331009998902720215324338793971539104536327914409275324813362824548.26638193047640483564404657711712654527393208146802479089052823629257002911828346250525673748227418087");
	BigDouble* b = init_bigdouble("-31955912010722883896759921705037929538119166938820894617046156737662402833038225611980635.23719171470326558707828409689609912941206685048147327524544062384757000767030561253733366623350");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le50)
{
	BigDouble* a = init_bigdouble("414170050464474875851573011651639345412967215853703084254224603457662014704720138976271.384332659459396403231039594000874818315449494426736028860444285345173340958847662580506870752412182060196");
	BigDouble* b = init_bigdouble("414170050464474875851573011651639345412967215853703084254224603457662014704720138976271.4767203196391741451460117521387916759714297713910055531077252115758493392626364293102793586812410448");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le51)
{
	BigDouble* a = init_bigdouble("99904464662392513665720809690218235945411666632605396847031889093786654408287846060216560.46629420884730290747945759083474733906681586436843959520067464017264472866329315021188998185989645073934");
	BigDouble* b = init_bigdouble("99904464662392513665720809690218235945411666632605396847031889093786654408287846060216560.3624799280327885454913894882045079047901616632002800405814577599395631984689190856076154429987617856");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le52)
{
	BigDouble* a = init_bigdouble("-10409844437966397441842277535091493664314908922423925484724913587201483002170059584070252.384152930151636603354313983803367098603320751296719349001716714793635461016068989999790349935562013419650");
	BigDouble* b = init_bigdouble("-10409844437966397441842277535091493664314908922423925484724913587201483002170059584070252.5810099709923270078140741041018973713793015303756680332374067356912414454094614988955948985759510828");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le53)
{
	BigDouble* a = init_bigdouble("51125714009335878856008712772501975642450431907907650571957150300119614124000274692964359.584853834172472890610814444094226601839708735612279081889859077519180158602270024792041798186192431388684");
	BigDouble* b = init_bigdouble("51125714009335878856008712772501975642450431907907650571957150300119614124000274692964359.2834995598906674536218937287545785377817916448602812387673990618244717487322075039691921957571620947");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le54)
{
	BigDouble* a = init_bigdouble("-91159272246851333481925016657340310450010563328347819614618634560938468023451831196137720.844724577081275088785867851074406105790301770859969030741508245320593918224436372812543593289365153417687");
	BigDouble* b = init_bigdouble("-91159272246851333481925016657340310450010563328347819614618634560938468023451831196137720.5745765821492766683413640552256453332915542407375606758667658487484618569817106153859360128992043650");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le55)
{
	BigDouble* a = init_bigdouble("4071795057588574972664192565003798173320260434626715318774005891170609656543516176231464.575941835253203852023486414826014569511275086160027729967069460560410979464758705282865128229178427994551");
	BigDouble* b = init_bigdouble("4071795057588574972664192565003798173320260434626715318774005891170609656543516176231464.8201930035107252860209093211787361933668601553435683122374450670553043128812960599694770595622255678");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le56)
{
	BigDouble* a = init_bigdouble("-33292597002813851739638204673867190012185772974455943448912419257503312207828131875645380.746127108015923021967710967264274784468140891093252780698847822439021381353384791004541054785286487516429");
	BigDouble* b = init_bigdouble("-33292597002813851739638204673867190012185772974455943448912419257503312207828131875645380.803610412541022390691455675033774893448966451543572728377730579518479999307575602224217072864839165");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le57)
{
	BigDouble* a = init_bigdouble("-32878647978298044853790180151883728343670711175667500448930326195904222566168685703436793.880630812130651900069136521594851736407465159613211097276063304153016986086466864381376412534001736200686");
	BigDouble* b = init_bigdouble("-32878647978298044853790180151883728343670711175667500448930326195904222566168685703436793.9886452678852911226721930186952322783945384610726860930750756447111414052109447577751377361047498338");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le58)
{
	BigDouble* a = init_bigdouble("-61130807104098911806564331920626041730779449707292552117973237403149753093222168407961138.949975186293476245897123780061484729572867849981035871966005394782915604763018635976101822580212464010361");
	BigDouble* b = init_bigdouble("-61130807104098911806564331920626041730779449707292552117973237403149753093222168407961138.1340596005957827467124867709470539362571107283671989746589705729259070998773785909526745813253554269");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le59)
{
	BigDouble* a = init_bigdouble("-36854675781868492036274568332470865619983886819552107549874829120506916451360067736808993.894941298715839724644969124810120821131171557187840832054834513216716337979626589678712818669253888551543");
	BigDouble* b = init_bigdouble("-36854675781868492036274568332470865619983886819552107549874829120506916451360067736808993.2882194803485969960428522484081956719091168662227084344377744646020964220543400477997002778747538539");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le60)
{
	BigDouble* a = init_bigdouble("60290520010302027811051495443241803550250881193506122831068448596557001302388004449145872.514892924472765746497934372750703172871257084257046479131584686460116287452748499757142230000945743208852");
	BigDouble* b = init_bigdouble("60290520010302027811051495443241803550250881193506122831068448596557001302388004449145872.275192558643871858047738976794955683655160253049834657138133803907423063047003135078569385366344206");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le61)
{
	BigDouble* a = init_bigdouble("21091046738199260960534530182276056970112427615711381966130503348255616816454447390807841.330715636075101708023144781642812122443611792113482807928987608311594657821274212545755004419007056970928");
	BigDouble* b = init_bigdouble("21091046738199260960534530182276056970112427615711381966130503348255616816454447390807841.1831041653341224884895994517941545397708863126334793606681531511395716046965320085675091530768961063");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le62)
{
	BigDouble* a = init_bigdouble("-14806081822814985648562108592113554741633730768491358189356066191623744365959617414020645.824544563029223592655904203062029903425879091772177536335424988333106486499263582145260188600965599259502");
	BigDouble* b = init_bigdouble("-14806081822814985648562108592113554741633730768491358189356066191623744365959617414020645.6304346948083216997729057271858004442490184730947864231422397615045467662355592205316071718555276194");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le63)
{
	BigDouble* a = init_bigdouble("39138402464968651690009422810674395951599984608592072503578117704310472443156773424443945.918694915609730860126048008465325563886255396441505570589965280891438427417467073806059269523849390987388");
	BigDouble* b = init_bigdouble("39138402464968651690009422810674395951599984608592072503578117704310472443156773424443945.1470935766501118361689689863632342098205851077548180386760133250013991411695511948532186407914167812");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le64)
{
	BigDouble* a = init_bigdouble("-86347757715768944321356796808303177897376956343374967438147498123648340472323085587256414.535700935594183056486545144491713918815986067084691592180257764536826081854701406050171269671581271818621");
	BigDouble* b = init_bigdouble("-86347757715768944321356796808303177897376956343374967438147498123648340472323085587256414.321801894678642032335065028459814156140116086352301673849456148429710151964724132896276367692635389");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le65)
{
	BigDouble* a = init_bigdouble("47822029884437464193550594626812659737451553842898680253654447008696037874501673477914330.313166361106747338384648429278011950262362567352473553082522813746996717714876073993184179949826289831081");
	BigDouble* b = init_bigdouble("47822029884437464193550594626812659737451553842898680253654447008696037874501673477914330.2809778331127412588670564297402165298091178100046685689635894140552888852570303454935362985540522529");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le66)
{
	BigDouble* a = init_bigdouble("67609532051487497029650539492432659148636061941647946169265886651083809841507409566371933.356280664371368068852150862579870589627761691152083807776576875300544259952272858238430245735427030942942");
	BigDouble* b = init_bigdouble("67609532051487497029650539492432659148636061941647946169265886651083809841507409566371933.8896481460617711126497030862734594801561129302332738755080473538133004782208160352727155564011744550");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le67)
{
	BigDouble* a = init_bigdouble("-2428567527669432714274795860091958094574592985749901002254028711571131706991976936475873.401666720770737153805621747585086018618150124997828193699098165211083495525776536453209919624336388701798");
	BigDouble* b = init_bigdouble("-2428567527669432714274795860091958094574592985749901002254028711571131706991976936475873.2456382610563134027834621664865086199301539234507682978093059631309021597914619675744938586175983778");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le68)
{
	BigDouble* a = init_bigdouble("-58630251634674019795043212124237025396648195587743910861364063676588893268642514616822263.823714857996739783662156652286982486958947994337046986292693389119919004064710187305921508279386613318892");
	BigDouble* b = init_bigdouble("-58630251634674019795043212124237025396648195587743910861364063676588893268642514616822263.9012161967979856967776893741055679614102442827854127917857815447620822148987270484952079806142740648");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le69)
{
	BigDouble* a = init_bigdouble("9370238582609004558352231197552318380353044462962145207988691452699661489235729510402024.5202689854058127657801410576538740314421468150076754345268642626171923549365083708353977759950231740169");
	BigDouble* b = init_bigdouble("9370238582609004558352231197552318380353044462962145207988691452699661489235729510402024.4842400052628551276403948186614333965186984913158274804928594378754715576813660685800678999230485414");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le70)
{
	BigDouble* a = init_bigdouble("-13496502354108890462660112249888421678813211461348490710227033073026161428137929391362782.980350606490771335302488860878528951569110364443502882419172163063506141768063560057533979822496783059722");
	BigDouble* b = init_bigdouble("-13496502354108890462660112249888421678813211461348490710227033073026161428137929391362782.3518233046617947096516967302568462091120104225723126588137177750361155966391747998107075525215623810");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le71)
{
	BigDouble* a = init_bigdouble("60853554286205135501003609719230371284897350619096347233696963328100117011052757070506925.609405795872184185882860376883232128378808989728475877886696115098119846817049936773935195037832260495033");
	BigDouble* b = init_bigdouble("60853554286205135501003609719230371284897350619096347233696963328100117011052757070506925.35029370737387786207648015381037766807079410697380878391470729345580571327591412475778034840523346");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le72)
{
	BigDouble* a = init_bigdouble("26469378476149680353921405215431308702655792431940170920137845432040620406879972278477960.901083900355922553317142711489447603763902724868119573494022115063120488168425154409737920357843553547045");
	BigDouble* b = init_bigdouble("26469378476149680353921405215431308702655792431940170920137845432040620406879972278477960.6234123334255489326854247614268657371782646738360193169887544083318365535528634833524062642681801706");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le73)
{
	BigDouble* a = init_bigdouble("-9778483630185600389043053779264173244825414342491340118475726890776343084321961729761981.594028257955947179634972448770938930897123446712692610546042284254359358003945721662670040571261621297866");
	BigDouble* b = init_bigdouble("-9778483630185600389043053779264173244825414342491340118475726890776343084321961729761981.4113612588945046492137128798359699148055972387561510005640768928147480471746180092877915770445831052");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le74)
{
	BigDouble* a = init_bigdouble("2436376536211099269230196268422850203017153882441306268703907197421945207269736588407760.631774350056672925700561147264751436808048829703201133110981429636591677645548550108807348983926269607555");
	BigDouble* b = init_bigdouble("2436376536211099269230196268422850203017153882441306268703907197421945207269736588407760.7726326101372136358763273429072243820233999861227683633912170513362682139518605160647233925837120948");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le75)
{
	BigDouble* a = init_bigdouble("54024291225157285754388212945136053241772623646690635540231810833651028578993841031492463.887630248830289480577633660257740424991819745101190837262612633115387111620697014841004412914859181102141");
	BigDouble* b = init_bigdouble("54024291225157285754388212945136053241772623646690635540231810833651028578993841031492463.7490951129422965430988178574935311479103519901289570688870091657247356396494747208535975745840273034");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le76)
{
	BigDouble* a = init_bigdouble("-84208352679623854782005990086853731913748353236556114008330263983906945411641249132790233.3349048416340224728276288806252928844191587804683494584367982952363944750915926278337563903449800634353");
	BigDouble* b = init_bigdouble("-84208352679623854782005990086853731913748353236556114008330263983906945411641249132790233.5447162501449136554231257806213818505961160433516751869092030509937377525856786042326009283886077803");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le77)
{
	BigDouble* a = init_bigdouble("-69608154715936348910525972398222237401642832125465450937333654581735520031476531952469634.454327014845904223423172050946696846100900462462649209941681112967391934201904899783401272247106222007633");
	BigDouble* b = init_bigdouble("-69608154715936348910525972398222237401642832125465450937333654581735520031476531952469634.2893693100754519274431394734407592333643639737012175245138361839486114951409652601056818528520450745");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le78)
{
	BigDouble* a = init_bigdouble("24271741882551146333427828657520653530604342440774541399796874393514446856641538319172462.884269676127032932827278945223958552139347163270121640722974472192792774717221680141481214315605421946089");
	BigDouble* b = init_bigdouble("24271741882551146333427828657520653530604342440774541399796874393514446856641538319172462.8187788850093875327601967272211414321025531773002181846843491397843455674702104479626436865182638850");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le79)
{
	BigDouble* a = init_bigdouble("73309164403125346953912128395909010073878264670019392545605868845489113085307813516133011.987646344010406074000116725228704086545294685313502928599437183052595320357623333142686755109308426921223");
	BigDouble* b = init_bigdouble("73309164403125346953912128395909010073878264670019392545605868845489113085307813516133011.3582432841176918864248757863118848617106817328628924240120855289462160158624681679131054713061442175");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le80)
{
	BigDouble* a = init_bigdouble("-1.521898305128687419450314938888881481240079561831544372401128595373372437782430446292977961758210550");
	BigDouble* b = init_bigdouble("-1.180610877835029210042918449135630741749719345355099103532147058101983823939629561330954555120280330");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le81)
{
	BigDouble* a = init_bigdouble("1.1944847263490665302275843523218333535239618193489085701980786630551557981256951088080033501822942971");
	BigDouble* b = init_bigdouble("1.4150799337071768963685822486327641805015816774480144999820892463137577907132161409820683668393269129");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le82)
{
	BigDouble* a = init_bigdouble("0.4554438135155473523456749945187590311024110758758725177273852163155842332625761789394303300391841510");
	BigDouble* b = init_bigdouble("0.4864228088194265385934478350516343620952182710063727663716286300452757039741974405689759911670655840");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le83)
{
	BigDouble* a = init_bigdouble("-1.3992859276212145000272155544427105397291572965734561203501608767616891294485644083005986706604276530");
	BigDouble* b = init_bigdouble("-1.9177427354758401803201813271763875044129599100141342261290410596153570510079907921413405126136301001");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le84)
{
	BigDouble* a = init_bigdouble("-1.1293529957149321769686015729449298899747722285853656613451140111492627892556582619210918092024057951");
	BigDouble* b = init_bigdouble("-1.6194445289596471727146804385850632777613229683001342975666687341013511720578951131195685072998347211");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le85)
{
	BigDouble* a = init_bigdouble("1.1326972348553550024037426031118324773336287782333095313798586503488113437996782207606000261097174243");
	BigDouble* b = init_bigdouble("1.1942908560945853166611680759350753385131840627436808767742390782059691923473781542594338101462833917");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le86)
{
	BigDouble* a = init_bigdouble("-1.6532848205245254622509055065329757833779653535149763015314400356561888135350393768621816243229749358");
	BigDouble* b = init_bigdouble("-1.5841850173960118105594827473162311612975373162304684370194965270143340348327468611439532301681601797");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le87)
{
	BigDouble* a = init_bigdouble("1.7586324250527176645723250240644648931420758321462972095448483681152254831646820099578400535257571005");
	BigDouble* b = init_bigdouble("1.4690057329860273330658096010963162539383264297183349325389985521871951561112536241748244826299928344");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le88)
{
	BigDouble* a = init_bigdouble("1.1379032072846380264830521302360219805937237291335597727470399360793336091298453668179291919611378879");
	BigDouble* b = init_bigdouble("1.2577699425663245574934422812870220303069061642558332370321029816099050160280437847671276555329169724");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le89)
{
	BigDouble* a = init_bigdouble("1.7999464066382350325173754270215627319068951227693476211065592567990690739607872517610137882013745469");
	BigDouble* b = init_bigdouble("1.7188955857007681380793874077736710131010227007948091909902269718668914778758624472786388797792906160");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le90)
{
	BigDouble* a = init_bigdouble("0.7656291697083980912562603345317389904729155694806547682188861167227299687107686220914279256990624449");
	BigDouble* b = init_bigdouble("0.5006276538117501828965706402199739126320623429067274975406855371390950161471271891996588948469622594");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le91)
{
	BigDouble* a = init_bigdouble("-1.9900459765308752664273512850963584125453341802001715675576389920284047861315652862115684678185600008");
	BigDouble* b = init_bigdouble("-1.3140785777079060078829171924192206030743225552971129080763224672176093026191162767600071751600374896");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le92)
{
	BigDouble* a = init_bigdouble("0.7520908235532153101034426316228205191208577146875558436881575550173168072460183716073625352783038114");
	BigDouble* b = init_bigdouble("0.2959812389543153212389018749905686243769043943919139621343724457579784519509987226762784535857368967");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le93)
{
	BigDouble* a = init_bigdouble("1.1736070569340843228294488529344075890312356525216233837646603825980070639246161759691313583189921579");
	BigDouble* b = init_bigdouble("1.6646744467355526562926396137696676739921640227038386227863174976872523666223361064559560485472977798");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le94)
{
	BigDouble* a = init_bigdouble("0.9102413832046972172204402756864396409414158757904800202023754606534716531606526120464067459276223705");
	BigDouble* b = init_bigdouble("0.2139755301903535217806583443072389877433309748979175539746623917667027281939262681476406416410826124");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le95)
{
	BigDouble* a = init_bigdouble("1.7270888007604970464567584014193769173703319311064873033771729718617708457083365375565792003098770570");
	BigDouble* b = init_bigdouble("1.6904656947959231837468939653063181659853272385390897811050667375270545170086200447515511959668166779");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le96)
{
	BigDouble* a = init_bigdouble("0.3922338450808282622360766795131682609614335195678610527693647597578054585546698233433962590821635468");
	BigDouble* b = init_bigdouble("0.5883918110215764237151789396541059733907906383374823333710486994871654567064016251745763504628394198");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le97)
{
	BigDouble* a = init_bigdouble("1.756444047683855881260055721567598391174982199834922506742986804896004142068643720462689830496182554");
	BigDouble* b = init_bigdouble("1.238319183956008609450607383469494309819473877147156847909514288208585852117266462529020528733172689");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le98)
{
	BigDouble* a = init_bigdouble("0.4833852934199892907327342184491825044933202648723793435488063662747127780045354436876577639417612081");
	BigDouble* b = init_bigdouble("0.3192189048131546972477879144637676450822192053791973661032402265370106154581251508535448030029948948");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le99)
{
	BigDouble* a = init_bigdouble("-1.949828957532319887300530770905303325605671205814438030001794204818833991162890566232504159425967354");
	BigDouble* b = init_bigdouble("-1.302583241100302521666063561397958894882673451923487097823086516236065925680644017329858497852503624");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le100)
{
	BigDouble* a = init_bigdouble("1.8111578268395859952426466893191263911966818260663355800981663886502163726706916685877013588609807193");
	BigDouble* b = init_bigdouble("1.4785184358487057971164010613077225472337866542457903073782217720447606818586679939821948044387996322");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le101)
{
	BigDouble* a = init_bigdouble("1.1674043147986667699178306274198661113941549438579182913502173335728603839241466705304275047939694415");
	BigDouble* b = init_bigdouble("1.9699467324462920694656589177630994063377344330505372442392600554739524739764740353449567547808233450");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le102)
{
	BigDouble* a = init_bigdouble("0.3570597795027173690463519941655588817854476634404513178283758327870957197618119790613829890983412240");
	BigDouble* b = init_bigdouble("0.2315965662812657666871052963081273662091034599873799275730117719637695827606110796972423063272677447");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le103)
{
	BigDouble* a = init_bigdouble("0.1166319478161109717008866800037424202241511014232132155295549021852229838974216302694916775450909103");
	BigDouble* b = init_bigdouble("0.4277946287876204781445202769798849708916048611532563101755722938303231466802937883345944234144543496");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le104)
{
	BigDouble* a = init_bigdouble("-1.2505729262351471951600199428199118632012381082659864943183593507940464509926269666338473125695762036");
	BigDouble* b = init_bigdouble("-1.7757530307856594836800831013830554883377950164355247090195820565435257796796869501005841444238464231");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le105)
{
	BigDouble* a = init_bigdouble("0.1459291233888196080976876704195720719059642596996927059110061372910404622997840097244038963883180880");
	BigDouble* b = init_bigdouble("0.9757810785422655263587147513629178376399008194444201877388142138905845353049305616526391491395827757");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le106)
{
	BigDouble* a = init_bigdouble("-1.6056713365713772389673844148512290719436746556331935749734301780508340002980748917312775563580908666");
	BigDouble* b = init_bigdouble("-1.5755597843928889703242829659019042212130523492446962407023684246896348997432445816656785239256967409");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le107)
{
	BigDouble* a = init_bigdouble("-1.5723910268595156273108849887004414010893839703839368151460170422164699416712196881549369796594029340");
	BigDouble* b = init_bigdouble("-1.3248497206471535176203845268457959961520186763772371582107321662703811044693568511635227990272353156");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le108)
{
	BigDouble* a = init_bigdouble("0.6272406003581424148569659319260636144040180914378188660195019072512046560312944039323942926481790371");
	BigDouble* b = init_bigdouble("0.6311662876587415012557398582118111515464349359498743555104675441974388401095842780888611043388970956");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le109)
{
	BigDouble* a = init_bigdouble("0.7205315580676666446180326650222688239707436590156077923174940764869925538965362636444009017120401595");
	BigDouble* b = init_bigdouble("0.4294702128874392076624413469369535730230179765267294785809339567289765350766842844934693408782610866");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le110)
{
	BigDouble* a = init_bigdouble("1.7360200943819147741598073236407632363606158791099162244855746065656976174255184746340977185768850554");
	BigDouble* b = init_bigdouble("1.1771100448827974855598904109959016823819000092498654969667689697995095199045214475939254651331874115");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le111)
{
	BigDouble* a = init_bigdouble("0.6805672430304132673984071752826276889471492961447838154353955824090271731745220969365835997852123690");
	BigDouble* b = init_bigdouble("0.3690856523686375904575696612041196718395602629897219445521241525462490405494958722268221286312254956");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le112)
{
	BigDouble* a = init_bigdouble("0.9120950332706661570311489262041836353767664125570027840192226723979002881601334800425543443255406235");
	BigDouble* b = init_bigdouble("0.3469435043409150420588271136143080635377023530670876980231609449543658452408754743038770046075348865");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le113)
{
	BigDouble* a = init_bigdouble("0.5366783796349909630478141071906672076163758297843692331807659697772473678523419945495922164775342264");
	BigDouble* b = init_bigdouble("0.9781401505361323999184490535712768333005660934020670423410464052498284966582442502893583667676907820");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le114)
{
	BigDouble* a = init_bigdouble("-1.8822991556550064380587410670683727557271321657383927496779462199945414853814531977503915939021933925");
	BigDouble* b = init_bigdouble("-1.4433281145349240971521389270663949160832510481783373478724266200696097165495869673627085993523389904");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le115)
{
	BigDouble* a = init_bigdouble("1.2635584962727708583844302350317801614686580206609668370434793170257301952110789853997937157254037888");
	BigDouble* b = init_bigdouble("1.4227992219120016230203582928034396413595412947467472466496654984892538163455733767858844793476403640");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le116)
{
	BigDouble* a = init_bigdouble("-1.7760763535633983700924581396667559489254604856169653583504948602206633626263228771870695822338816379");
	BigDouble* b = init_bigdouble("-1.3642526560029806759298406627987503394640708534749075515579278965826892302167410933257444128685344672");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le117)
{
	BigDouble* a = init_bigdouble("-1.5950672360348748257509588130660579268734778157241050939142680825645167232747644290693328229811681199");
	BigDouble* b = init_bigdouble("-1.2169181972135103166707327709166355644065373321209960572538519166189017894471731775402125326411974349");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le118)
{
	BigDouble* a = init_bigdouble("1.9355353984757029426510892117160749715444836713816887932446078927466145624476113488753522632928909559");
	BigDouble* b = init_bigdouble("1.5136838297816771321878129377803329947912426811741261451551112371900292960775495977039688145278541505");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 0);
}

START_TEST(test_le119)
{
	BigDouble* a = init_bigdouble("-1.7378780557742004629612535585696636183722802091907320033025401748204859458252729030273190424719335631");
	BigDouble* b = init_bigdouble("-1.1287310824072997777127505376745689764339093178478141668840896127982404430157888720560313853181122276");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le120)
{
	BigDouble* a = init_bigdouble("-1.7378780557742004629612535585696636183722802091907320033025401748204859458252729030273190424719335631");
	BigDouble* b = init_bigdouble("-1.7378780557742004629612535585696636183722802091907320033025401748204859458252729030273190424719335630");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

START_TEST(test_le121)
{
	BigDouble* a = init_bigdouble("1.7378780557742004629612535585696636183722802091907320033025401748204859458252729030273190424719335631");
	BigDouble* b = init_bigdouble("1.7378780557742004629612535585696636183722802091907320033025401748204859458252729030273190424719335632");
	ck_assert_int_eq(bigdouble_cmp(a, "<", b), 1);
}

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
		*tceq16, *tceq17, *tceq18, *tceq19, *tceq20,
		*tceq21;

	TCase *tcle1, *tcle2, *tcle3, *tcle4, *tcle5,
		*tcle6, *tcle7, *tcle8, *tcle9, *tcle10,
		*tcle11, *tcle12, *tcle13, *tcle14, *tcle15,
		*tcle16, *tcle17, *tcle18, *tcle19, *tcle20, 
		*tcle21, *tcle22, *tcle23, *tcle24, *tcle25, 
		*tcle26, *tcle27, *tcle28, *tcle29, *tcle30, 
		*tcle31, *tcle32, *tcle33, *tcle34, *tcle35, 
		*tcle36, *tcle37, *tcle38, *tcle39, *tcle40, 
		*tcle41, *tcle42, *tcle43, *tcle44, *tcle45, 
		*tcle46, *tcle47, *tcle48, *tcle49, *tcle50, 
		*tcle51, *tcle52, *tcle53, *tcle54, *tcle55, 
		*tcle56, *tcle57, *tcle58, *tcle59, *tcle60, 
		*tcle61, *tcle62, *tcle63, *tcle64, *tcle65, 
		*tcle66, *tcle67, *tcle68, *tcle69, *tcle70, 
		*tcle71, *tcle72, *tcle73, *tcle74, *tcle75, 
		*tcle76, *tcle77, *tcle78, *tcle79, *tcle80, 
		*tcle81, *tcle82, *tcle83, *tcle84, *tcle85, 
		*tcle86, *tcle87, *tcle88, *tcle89, *tcle90, 
		*tcle91, *tcle92, *tcle93, *tcle94, *tcle95, 
		*tcle96, *tcle97, *tcle98, *tcle99, *tcle100, 
		*tcle101, *tcle102, *tcle103, *tcle104, *tcle105, 
		*tcle106, *tcle107, *tcle108, *tcle109, *tcle110, 
		*tcle111, *tcle112, *tcle113, *tcle114, *tcle115, 
		*tcle116, *tcle117, *tcle118, *tcle119, *tcle120,
		*tcle121;

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
	tceq21 = tcase_create("test_eq21");
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
	tcle15 = tcase_create("test_le15");
	tcle16 = tcase_create("test_le16");
	tcle17 = tcase_create("test_le17");
	tcle18 = tcase_create("test_le18");
	tcle19 = tcase_create("test_le19");
	tcle20 = tcase_create("test_le20");
	tcle21 = tcase_create("test_le21");
	tcle22 = tcase_create("test_le22");
	tcle23 = tcase_create("test_le23");
	tcle24 = tcase_create("test_le24");
	tcle25 = tcase_create("test_le25");
	tcle26 = tcase_create("test_le26");
	tcle27 = tcase_create("test_le27");
	tcle28 = tcase_create("test_le28");
	tcle29 = tcase_create("test_le29");
	tcle30 = tcase_create("test_le30");
	tcle31 = tcase_create("test_le31");
	tcle32 = tcase_create("test_le32");
	tcle33 = tcase_create("test_le33");
	tcle34 = tcase_create("test_le34");
	tcle35 = tcase_create("test_le35");
	tcle36 = tcase_create("test_le36");
	tcle37 = tcase_create("test_le37");
	tcle38 = tcase_create("test_le38");
	tcle39 = tcase_create("test_le39");
	tcle40 = tcase_create("test_le40");
	tcle41 = tcase_create("test_le41");
	tcle42 = tcase_create("test_le42");
	tcle43 = tcase_create("test_le43");
	tcle44 = tcase_create("test_le44");
	tcle45 = tcase_create("test_le45");
	tcle46 = tcase_create("test_le46");
	tcle47 = tcase_create("test_le47");
	tcle48 = tcase_create("test_le48");
	tcle49 = tcase_create("test_le49");
	tcle50 = tcase_create("test_le50");
	tcle51 = tcase_create("test_le51");
	tcle52 = tcase_create("test_le52");
	tcle53 = tcase_create("test_le53");
	tcle54 = tcase_create("test_le54");
	tcle55 = tcase_create("test_le55");
	tcle56 = tcase_create("test_le56");
	tcle57 = tcase_create("test_le57");
	tcle58 = tcase_create("test_le58");
	tcle59 = tcase_create("test_le59");
	tcle60 = tcase_create("test_le60");
	tcle61 = tcase_create("test_le61");
	tcle62 = tcase_create("test_le62");
	tcle63 = tcase_create("test_le63");
	tcle64 = tcase_create("test_le64");
	tcle65 = tcase_create("test_le65");
	tcle66 = tcase_create("test_le66");
	tcle67 = tcase_create("test_le67");
	tcle68 = tcase_create("test_le68");
	tcle69 = tcase_create("test_le69");
	tcle70 = tcase_create("test_le70");
	tcle71 = tcase_create("test_le71");
	tcle72 = tcase_create("test_le72");
	tcle73 = tcase_create("test_le73");
	tcle74 = tcase_create("test_le74");
	tcle75 = tcase_create("test_le75");
	tcle76 = tcase_create("test_le76");
	tcle77 = tcase_create("test_le77");
	tcle78 = tcase_create("test_le78");
	tcle79 = tcase_create("test_le79");
	tcle80 = tcase_create("test_le80");
	tcle81 = tcase_create("test_le81");
	tcle82 = tcase_create("test_le82");
	tcle83 = tcase_create("test_le83");
	tcle84 = tcase_create("test_le84");
	tcle85 = tcase_create("test_le85");
	tcle86 = tcase_create("test_le86");
	tcle87 = tcase_create("test_le87");
	tcle88 = tcase_create("test_le88");
	tcle89 = tcase_create("test_le89");
	tcle90 = tcase_create("test_le90");
	tcle91 = tcase_create("test_le91");
	tcle92 = tcase_create("test_le92");
	tcle93 = tcase_create("test_le93");
	tcle94 = tcase_create("test_le94");
	tcle95 = tcase_create("test_le95");
	tcle96 = tcase_create("test_le96");
	tcle97 = tcase_create("test_le97");
	tcle98 = tcase_create("test_le98");
	tcle99 = tcase_create("test_le99");
	tcle100 = tcase_create("test_le100");
	tcle101 = tcase_create("test_le101");
	tcle102 = tcase_create("test_le102");
	tcle103 = tcase_create("test_le103");
	tcle104 = tcase_create("test_le104");
	tcle105 = tcase_create("test_le105");
	tcle106 = tcase_create("test_le106");
	tcle107 = tcase_create("test_le107");
	tcle108 = tcase_create("test_le108");
	tcle109 = tcase_create("test_le109");
	tcle110 = tcase_create("test_le110");
	tcle111 = tcase_create("test_le111");
	tcle112 = tcase_create("test_le112");
	tcle113 = tcase_create("test_le113");
	tcle114 = tcase_create("test_le114");
	tcle115 = tcase_create("test_le115");
	tcle116 = tcase_create("test_le116");
	tcle117 = tcase_create("test_le117");
	tcle118 = tcase_create("test_le118");
	tcle119 = tcase_create("test_le119");
	tcle120 = tcase_create("test_le120");
	tcle121 = tcase_create("test_le121");
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
	tcase_add_test(tceq21, test_eq21);
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
	tcase_add_test(tcle15, test_le15);
	tcase_add_test(tcle16, test_le16);
	tcase_add_test(tcle17, test_le17);
	tcase_add_test(tcle18, test_le18);
	tcase_add_test(tcle19, test_le19);
	tcase_add_test(tcle20, test_le20);
	tcase_add_test(tcle21, test_le21);
	tcase_add_test(tcle22, test_le22);
	tcase_add_test(tcle23, test_le23);
	tcase_add_test(tcle24, test_le24);
	tcase_add_test(tcle25, test_le25);
	tcase_add_test(tcle26, test_le26);
	tcase_add_test(tcle27, test_le27);
	tcase_add_test(tcle28, test_le28);
	tcase_add_test(tcle29, test_le29);
	tcase_add_test(tcle30, test_le30);
	tcase_add_test(tcle31, test_le31);
	tcase_add_test(tcle32, test_le32);
	tcase_add_test(tcle33, test_le33);
	tcase_add_test(tcle34, test_le34);
	tcase_add_test(tcle35, test_le35);
	tcase_add_test(tcle36, test_le36);
	tcase_add_test(tcle37, test_le37);
	tcase_add_test(tcle38, test_le38);
	tcase_add_test(tcle39, test_le39);
	tcase_add_test(tcle40, test_le40);
	tcase_add_test(tcle41, test_le41);
	tcase_add_test(tcle42, test_le42);
	tcase_add_test(tcle43, test_le43);
	tcase_add_test(tcle44, test_le44);
	tcase_add_test(tcle45, test_le45);
	tcase_add_test(tcle46, test_le46);
	tcase_add_test(tcle47, test_le47);
	tcase_add_test(tcle48, test_le48);
	tcase_add_test(tcle49, test_le49);
	tcase_add_test(tcle50, test_le50);
	tcase_add_test(tcle51, test_le51);
	tcase_add_test(tcle52, test_le52);
	tcase_add_test(tcle53, test_le53);
	tcase_add_test(tcle54, test_le54);
	tcase_add_test(tcle55, test_le55);
	tcase_add_test(tcle56, test_le56);
	tcase_add_test(tcle57, test_le57);
	tcase_add_test(tcle58, test_le58);
	tcase_add_test(tcle59, test_le59);
	tcase_add_test(tcle60, test_le60);
	tcase_add_test(tcle61, test_le61);
	tcase_add_test(tcle62, test_le62);
	tcase_add_test(tcle63, test_le63);
	tcase_add_test(tcle64, test_le64);
	tcase_add_test(tcle65, test_le65);
	tcase_add_test(tcle66, test_le66);
	tcase_add_test(tcle67, test_le67);
	tcase_add_test(tcle68, test_le68);
	tcase_add_test(tcle69, test_le69);
	tcase_add_test(tcle70, test_le70);
	tcase_add_test(tcle71, test_le71);
	tcase_add_test(tcle72, test_le72);
	tcase_add_test(tcle73, test_le73);
	tcase_add_test(tcle74, test_le74);
	tcase_add_test(tcle75, test_le75);
	tcase_add_test(tcle76, test_le76);
	tcase_add_test(tcle77, test_le77);
	tcase_add_test(tcle78, test_le78);
	tcase_add_test(tcle79, test_le79);
	tcase_add_test(tcle80, test_le80);
	tcase_add_test(tcle81, test_le81);
	tcase_add_test(tcle82, test_le82);
	tcase_add_test(tcle83, test_le83);
	tcase_add_test(tcle84, test_le84);
	tcase_add_test(tcle85, test_le85);
	tcase_add_test(tcle86, test_le86);
	tcase_add_test(tcle87, test_le87);
	tcase_add_test(tcle88, test_le88);
	tcase_add_test(tcle89, test_le89);
	tcase_add_test(tcle90, test_le90);
	tcase_add_test(tcle91, test_le91);
	tcase_add_test(tcle92, test_le92);
	tcase_add_test(tcle93, test_le93);
	tcase_add_test(tcle94, test_le94);
	tcase_add_test(tcle95, test_le95);
	tcase_add_test(tcle96, test_le96);
	tcase_add_test(tcle97, test_le97);
	tcase_add_test(tcle98, test_le98);
	tcase_add_test(tcle99, test_le99);
	tcase_add_test(tcle100, test_le100);
	tcase_add_test(tcle101, test_le101);
	tcase_add_test(tcle102, test_le102);
	tcase_add_test(tcle103, test_le103);
	tcase_add_test(tcle104, test_le104);
	tcase_add_test(tcle105, test_le105);
	tcase_add_test(tcle106, test_le106);
	tcase_add_test(tcle107, test_le107);
	tcase_add_test(tcle108, test_le108);
	tcase_add_test(tcle109, test_le109);
	tcase_add_test(tcle110, test_le110);
	tcase_add_test(tcle111, test_le111);
	tcase_add_test(tcle112, test_le112);
	tcase_add_test(tcle113, test_le113);
	tcase_add_test(tcle114, test_le114);
	tcase_add_test(tcle115, test_le115);
	tcase_add_test(tcle116, test_le116);
	tcase_add_test(tcle117, test_le117);
	tcase_add_test(tcle118, test_le118);
	tcase_add_test(tcle119, test_le119);
	tcase_add_test(tcle120, test_le120);
	tcase_add_test(tcle121, test_le121);
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
	suite_add_tcase(s, tcle15);
	suite_add_tcase(s, tcle16);
	suite_add_tcase(s, tcle17);
	suite_add_tcase(s, tcle18);
	suite_add_tcase(s, tcle19);
	suite_add_tcase(s, tcle20);
	suite_add_tcase(s, tcle21);
	suite_add_tcase(s, tcle22);
	suite_add_tcase(s, tcle23);
	suite_add_tcase(s, tcle24);
	suite_add_tcase(s, tcle25);
	suite_add_tcase(s, tcle26);
	suite_add_tcase(s, tcle27);
	suite_add_tcase(s, tcle28);
	suite_add_tcase(s, tcle29);
	suite_add_tcase(s, tcle30);
	suite_add_tcase(s, tcle31);
	suite_add_tcase(s, tcle32);
	suite_add_tcase(s, tcle33);
	suite_add_tcase(s, tcle34);
	suite_add_tcase(s, tcle35);
	suite_add_tcase(s, tcle36);
	suite_add_tcase(s, tcle37);
	suite_add_tcase(s, tcle38);
	suite_add_tcase(s, tcle39);
	suite_add_tcase(s, tcle40);
	suite_add_tcase(s, tcle41);
	suite_add_tcase(s, tcle42);
	suite_add_tcase(s, tcle43);
	suite_add_tcase(s, tcle44);
	suite_add_tcase(s, tcle45);
	suite_add_tcase(s, tcle46);
	suite_add_tcase(s, tcle47);
	suite_add_tcase(s, tcle48);
	suite_add_tcase(s, tcle49);
	suite_add_tcase(s, tcle50);
	suite_add_tcase(s, tcle51);
	suite_add_tcase(s, tcle52);
	suite_add_tcase(s, tcle53);
	suite_add_tcase(s, tcle54);
	suite_add_tcase(s, tcle55);
	suite_add_tcase(s, tcle56);
	suite_add_tcase(s, tcle57);
	suite_add_tcase(s, tcle58);
	suite_add_tcase(s, tcle59);
	suite_add_tcase(s, tcle60);
	suite_add_tcase(s, tcle61);
	suite_add_tcase(s, tcle62);
	suite_add_tcase(s, tcle63);
	suite_add_tcase(s, tcle64);
	suite_add_tcase(s, tcle65);
	suite_add_tcase(s, tcle66);
	suite_add_tcase(s, tcle67);
	suite_add_tcase(s, tcle68);
	suite_add_tcase(s, tcle69);
	suite_add_tcase(s, tcle70);
	suite_add_tcase(s, tcle71);
	suite_add_tcase(s, tcle72);
	suite_add_tcase(s, tcle73);
	suite_add_tcase(s, tcle74);
	suite_add_tcase(s, tcle75);
	suite_add_tcase(s, tcle76);
	suite_add_tcase(s, tcle77);
	suite_add_tcase(s, tcle78);
	suite_add_tcase(s, tcle79);
	suite_add_tcase(s, tcle80);
	suite_add_tcase(s, tcle81);
	suite_add_tcase(s, tcle82);
	suite_add_tcase(s, tcle83);
	suite_add_tcase(s, tcle84);
	suite_add_tcase(s, tcle85);
	suite_add_tcase(s, tcle86);
	suite_add_tcase(s, tcle87);
	suite_add_tcase(s, tcle88);
	suite_add_tcase(s, tcle89);
	suite_add_tcase(s, tcle90);
	suite_add_tcase(s, tcle91);
	suite_add_tcase(s, tcle92);
	suite_add_tcase(s, tcle93);
	suite_add_tcase(s, tcle94);
	suite_add_tcase(s, tcle95);
	suite_add_tcase(s, tcle96);
	suite_add_tcase(s, tcle97);
	suite_add_tcase(s, tcle98);
	suite_add_tcase(s, tcle99);
	suite_add_tcase(s, tcle100);
	suite_add_tcase(s, tcle101);
	suite_add_tcase(s, tcle102);
	suite_add_tcase(s, tcle103);
	suite_add_tcase(s, tcle104);
	suite_add_tcase(s, tcle105);
	suite_add_tcase(s, tcle106);
	suite_add_tcase(s, tcle107);
	suite_add_tcase(s, tcle108);
	suite_add_tcase(s, tcle109);
	suite_add_tcase(s, tcle110);
	suite_add_tcase(s, tcle111);
	suite_add_tcase(s, tcle112);
	suite_add_tcase(s, tcle113);
	suite_add_tcase(s, tcle114);
	suite_add_tcase(s, tcle115);
	suite_add_tcase(s, tcle116);
	suite_add_tcase(s, tcle117);
	suite_add_tcase(s, tcle118);
	suite_add_tcase(s, tcle119);
	suite_add_tcase(s, tcle120);
	suite_add_tcase(s, tcle121);
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

START_TEST(test_sub41)
{
	BigDouble* a = init_bigdouble("5652946573271878581358717583659990598781050558707389104367864872.8311093801852769463381114977682555325028781469348035803876228865");
	BigDouble* b = init_bigdouble("-9926304982361977554126946720083462703022456712216922361782005372.7143239344385591707024155010330287135982688847597860137026995901");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "15579251555633856135485664303743453301803507270924311466149870245.5454333146238361170405269988012842461011470316945895940903224766");
}

START_TEST(test_sub42)
{
	BigDouble* a = init_bigdouble("-2842114793522237290266594049541467183649874779463465490213106755.2314845837620255946268333673551007074279521112387151997147581076");
	BigDouble* b = init_bigdouble("-6585209768541071492048311013380332631941847352829552720853880852.6917883569655208977266335217391730703995912604206993687064116553");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "3743094975018834201781716963838865448291972573366087230640774097.4603037732034953030998001543840723629716391491819841689916535477");
}

START_TEST(test_sub43)
{
	BigDouble* a = init_bigdouble("-981627722727707171764008761677337729827849477240321878678041243.9886524497482652631116006977655513195063403945617750344252260467");
	BigDouble* b = init_bigdouble("5627149647371089847461020256578638947475050588813135242182789292.9599078574756086401378099748592741217526068724504278009515929930");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-6608777370098797019225029018255976677302900066053457120860830536.9485603072238739032494106726248254412589472670122028353768190397");
}

START_TEST(test_sub44)
{
	BigDouble* a = init_bigdouble("-6525691498386147519619596457070221571907468765436379093658941204.3162882913340348505254639065609695975638746776631931573952460865");
	BigDouble* b = init_bigdouble("8918362764736493722948851163945659798691895886120009931134708979.668649440102420595976929152789620987775449331863038077840506014");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-15444054263122641242568447621015881370599364651556389024793650183.9849377314364554465023930593505905853393240095262312352357521005");
}

START_TEST(test_sub45)
{
	BigDouble* a = init_bigdouble("-2751689612970414385116948316172500165568927955944944864445279227.9106080636413476119232789443455322215267220532152893524498607122");
	BigDouble* b = init_bigdouble("-7473969354282297538295080291432396413397898323017005395917238508.6580430316265495418330068645345883488142937922376486165059592123");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "4722279741311883153178131975259896247828970367072060531471959280.7474349679852019299097279201890561272875717390223592640560985001");
}

START_TEST(test_sub46)
{
	BigDouble* a = init_bigdouble("2810923281130711909954289143841543125792095862928371236745683031.7173873895028284057860876318422908517036160959398067826051318522");
	BigDouble* b = init_bigdouble("-480016189274555631005971705793367659100170592621802115959914375.1223938238545274835703698751910571303674944445576236477356283811");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "3290939470405267540960260849634910784892266455550173352705597406.8397812133573558893564575070333479820711105404974304303407602333");
}

START_TEST(test_sub47)
{
	BigDouble* a = init_bigdouble("3272146908745197856504623015909035788048770272366546520719701575.334477925288978601519264189682465972962861395999110898211266637");
	BigDouble* b = init_bigdouble("1336087988114262212118967875953496974203978692870492466916521692.4201439148054683608569240866339787998328128331808574094615538765");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "1936058920630935644385655139955538813844791579496054053803179882.914334010483510240662340103048487173130048562818253488749712760500000000000000000000000000000000000000000000000000000000000000");
}

START_TEST(test_sub48)
{
	BigDouble* a = init_bigdouble("-3314657236260482564967873463917439272842773989773151198949079448.2314149314775480918345037735142967667097003244659242562024251039");
	BigDouble* b = init_bigdouble("-3625240779205438921019676985273937018569002646865749350276000827.152159909713662224438362043120269689637886316373061183113458287");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "310583542944956356051803521356497745726228657092598151326921378.920744978236114132603858269605972922928185991907136926911033183100000000000000000000000000000000000000000000000000000000000000");
}

START_TEST(test_sub49)
{
	BigDouble* a = init_bigdouble("-3434792812920912171969925394654840524939635379521343465374286746.8303535884957314540381445726514827792854143844556214746507888952");
	BigDouble* b = init_bigdouble("3662986774625200919498421203266011500167492780393759556245952976.5117550776326865304516830882376250803231596161988120706456270668");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-7097779587546113091468346597920852025107128159915103021620239723.3421086661284179844898276608891078596085740006544335452964159620");
}

START_TEST(test_sub50)
{
	BigDouble* a = init_bigdouble("1191700607603295123821351252071810489990069791185340699426765464.1201092134152483711470141741846837649572260806104135768676508196");
	BigDouble* b = init_bigdouble("9644332526738824877202648356446651840452360564622286696726981131.1547620687725785435586046036598640046840754990434858984636021100");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "-8452631919135529753381297104374841350462290773436945997300215667.0346528553573301724115904294751802397268494184330723215959512904");
}

START_TEST(test_sub51)
{
	BigDouble* a = init_bigdouble("1");
	BigDouble* b = init_bigdouble("0.0000000000000000000000000000001");
	bigdouble_sub(a, b);
	ck_assert_str_eq(bigdouble_str(a), "0.99999999999999999999999999999990");
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
		*tcsub37, *tcsub38, *tcsub39, *tcsub40, *tcsub41,
		*tcsub42, *tcsub43, *tcsub44, *tcsub45, *tcsub46,
		*tcsub47, *tcsub48, *tcsub49, *tcsub50, *tcsub51;

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
	tcsub41 = tcase_create("test_sub41");
	tcsub42 = tcase_create("test_sub42");
	tcsub43 = tcase_create("test_sub43");
	tcsub44 = tcase_create("test_sub44");
	tcsub45 = tcase_create("test_sub45");
	tcsub46 = tcase_create("test_sub46");
	tcsub47 = tcase_create("test_sub47");
	tcsub48 = tcase_create("test_sub48");
	tcsub49 = tcase_create("test_sub49");
	tcsub50 = tcase_create("test_sub50");
	tcsub51 = tcase_create("test_sub51");

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
	tcase_add_test(tcsub41, test_sub41);
	tcase_add_test(tcsub42, test_sub42);
	tcase_add_test(tcsub43, test_sub43);
	tcase_add_test(tcsub44, test_sub44);
	tcase_add_test(tcsub45, test_sub45);
	tcase_add_test(tcsub46, test_sub46);
	tcase_add_test(tcsub47, test_sub47);
	tcase_add_test(tcsub48, test_sub48);
	tcase_add_test(tcsub49, test_sub49);
	tcase_add_test(tcsub50, test_sub50);
	tcase_add_test(tcsub51, test_sub51);

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
	suite_add_tcase(s, tcsub41);
	suite_add_tcase(s, tcsub42);
	suite_add_tcase(s, tcsub43);
	suite_add_tcase(s, tcsub44);
	suite_add_tcase(s, tcsub45);
	suite_add_tcase(s, tcsub46);
	suite_add_tcase(s, tcsub47);
	suite_add_tcase(s, tcsub48);
	suite_add_tcase(s, tcsub49);
	suite_add_tcase(s, tcsub50);
	suite_add_tcase(s, tcsub51);

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