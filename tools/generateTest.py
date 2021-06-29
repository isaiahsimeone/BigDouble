import random

testBuff = ""
varDeclBuff = ""
tcaseCreateBuff = ""
tcaseAddBuff = ""
suiteAddBuff = ""

# Generating functions #

def generateAdditionTest(testNum):
	global testBuff, varDeclBuff, tcaseCreateBuff, tcaseAddBuff, suiteAddBuff
	random1 = random.randint(-100000000000000, 100000000000000)
	random2 = random.randint(-100000000000000, 100000000000000)
	ans = random1 + random2

	# Write the test
	testBuff += "START_TEST(test_add" + str(testNum) + ")\n"
	testBuff += "{\n"
	testBuff += "\tBigDouble* a = init_bigdouble(\"" + str(random1) + "\");\n"
	testBuff += "\tBigDouble* b = init_bigdouble(\"" + str(random2) + "\");\n"
	testBuff += "\tbigdouble_add(a, b);\n"
	testBuff += "\tck_assert_str_eq(bigdouble_str(a), \""+ str(ans) +"\");\n"
	testBuff += "}\n\n"
	# Declare test var
	varDeclBuff += "*tca" + str(testNum) + ", "
	# Write creation
	tcaseCreateBuff += "tca" + str(testNum) + " = tcase_create(\"test_add" + str(testNum) + "\");\n"
	# Add test case
	tcaseAddBuff += "tcase_add_test(tca" + str(testNum) + ", test_add" + str(testNum) + ");\n"
	# add to suite
	suiteAddBuff += "suite_add_tcase(s, tca" + str(testNum) + ");\n"


def generateSubtractionTest(testNum):
	global testBuff, varDeclBuff, tcaseCreateBuff, tcaseAddBuff, suiteAddBuff
	random1 = random.randint(-10000000000000000000000000000000000000000000000000000000000000000, 10000000000000000000000000000000000000000000000000000000000000000)
	random2 = random.randint(-10000000000000000000000000000000000000000000000000000000000000000, 10000000000000000000000000000000000000000000000000000000000000000)
	random12 = random.randint(1, 10000000000000000000000000000000000000000000000000000000000000000)
	random22 = random.randint(1, 10000000000000000000000000000000000000000000000000000000000000000)
	ans = random1 - random2
	fracPart = random12 - random22
	# Write the test
	testBuff += "START_TEST(test_sub" + str(testNum) + ")\n"
	testBuff += "{\n"
	testBuff += "\tBigDouble* a = init_bigdouble(\"" + str(random1) + "." + str(random12) + "\");\n"
	testBuff += "\tBigDouble* b = init_bigdouble(\"" + str(random2) + "." + str(random22) + "\");\n"
	testBuff += "\tbigdouble_sub(a, b);\n"
	testBuff += "\tck_assert_str_eq(bigdouble_str(a), \""+ str(ans) +"\");\n"
	testBuff += "}\n\n"
	# Declare test var
	varDeclBuff += "*tcsub" + str(testNum) + ", "
	# Write creation
	tcaseCreateBuff += "tcsub" + str(testNum) + " = tcase_create(\"test_sub" + str(testNum) + "\");\n"
	# Add test case
	tcaseAddBuff += "tcase_add_test(tcsub" + str(testNum) + ", test_sub" + str(testNum) + ");\n"
	# add to suite
	suiteAddBuff += "suite_add_tcase(s, tcsub" + str(testNum) + ");\n"

def generateInitTest(testNum):
	global testBuff, varDeclBuff, tcaseCreateBuff, tcaseAddBuff, suiteAddBuff
	rand = random.uniform(-100, 100)
	
	# Write the test
	testBuff += "START_TEST(test_init" + str(testNum) + ")\n"
	testBuff += "{\n"
	testBuff += "\tBigDouble* a = init_bigdouble(\"" + str(rand) + "\");\n"
	testBuff += "\tck_assert_str_eq(bigdouble_str(a), \""+ str(rand) +"\");\n"
	testBuff += "}\n\n"
	# Declare test var
	varDeclBuff += "*tci" + str(testNum) + ", "
	# Write creation
	tcaseCreateBuff += "tcinit" + str(testNum) + " = tcase_create(\"test_init" + str(testNum) + "\");\n"
	# Add test case
	tcaseAddBuff += "tcase_add_test(tci" + str(testNum) + ", test_init" + str(testNum) + ");\n"
	# add to suite
	suiteAddBuff += "suite_add_tcase(s, tci" + str(testNum) + ");\n"

def generateIsLessTest(testNum):
	global testBuff, varDeclBuff, tcaseCreateBuff, tcaseAddBuff, suiteAddBuff
	random1 = random.randint(-100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000, 100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000)
	random11 = random.randint(0,100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
	random2 = random.randint(-100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000, 100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000)
	random21 = random.randint(0,100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
	if random1 == random2:
		ans = int(random11 < random21)
	else:
		ans = int(random1 < random2)
	# Write the test
	testBuff += "START_TEST(test_le" + str(testNum) + ")\n"
	testBuff += "{\n"
	testBuff += "\tBigDouble* a = init_bigdouble(\"" + str(random1) + "." + str(random11) + "\");\n"
	testBuff += "\tBigDouble* b = init_bigdouble(\"" + str(random2) + "." + str(random21) + "\");\n"
	testBuff += "\tck_assert_int_eq(bigdouble_cmp(a, \"<\", b), "+ str(ans) +");\n"
	testBuff += "}\n\n"
	# Declare test var
	varDeclBuff += "*tcle" + str(testNum) + ", "
	# Write creation
	tcaseCreateBuff += "tcle" + str(testNum) + " = tcase_create(\"test_le" + str(testNum) + "\");\n"
	# Add test case
	tcaseAddBuff += "tcase_add_test(tcle" + str(testNum) + ", test_le" + str(testNum) + ");\n"
	# add to suite
	suiteAddBuff += "suite_add_tcase(s, tcle" + str(testNum) + ");\n"

# Same exponent with different mantissa
def generateIsLessTest2(testNum):
	global testBuff, varDeclBuff, tcaseCreateBuff, tcaseAddBuff, suiteAddBuff
	random1 = random.randint(-1, 1)
	random11 = random.randint(0,10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
	random21 = random.randint(0,10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
	# lazy way to generate numbers with the same number of digits
	while len(str(random21)) != len(str(random11)):
		random21 = random.randint(0,10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
	
	if random1 < 0:
		ans = int(random11 > random21)
	else:
		ans = int(random11 < random21)
	# Write the test
	testBuff += "START_TEST(test_le" + str(testNum) + ")\n"
	testBuff += "{\n"
	testBuff += "\tBigDouble* a = init_bigdouble(\"" + str(random1) + "." + str(random11) + "\");\n"
	testBuff += "\tBigDouble* b = init_bigdouble(\"" + str(random1) + "." + str(random21) + "\");\n"
	testBuff += "\tck_assert_int_eq(bigdouble_cmp(a, \"<\", b), "+ str(ans) +");\n"
	testBuff += "}\n\n"
	# Declare test var
	varDeclBuff += "*tcle" + str(testNum) + ", "
	# Write creation
	tcaseCreateBuff += "tcle" + str(testNum) + " = tcase_create(\"test_le" + str(testNum) + "\");\n"
	# Add test case
	tcaseAddBuff += "tcase_add_test(tcle" + str(testNum) + ", test_le" + str(testNum) + ");\n"
	# add to suite
	suiteAddBuff += "suite_add_tcase(s, tcle" + str(testNum) + ");\n"


################
# Generate tests
################

for i in range(41, 51):
	generateSubtractionTest(i)

out = open("newtests", "w");

for entry in testBuff:
	out.write(entry)
out.write("\n\n")
for entry in varDeclBuff:
	out.write(entry)
out.write("\n\n")
for entry in tcaseCreateBuff:
	out.write(entry)
out.write("\n\n")
for entry in tcaseAddBuff:
	out.write(entry)
out.write("\n\n")
for entry in suiteAddBuff:
	out.write(entry)

out.close();