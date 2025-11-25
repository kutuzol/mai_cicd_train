#include "unity.h"
#include "main.h"

void setUp(void) {}
void tearDown(void) {}

void test_add_positive_numbers(void) {
    TEST_ASSERT_EQUAL(8, add(5, 3));
}

void test_add_negative_numbers(void) {
    TEST_ASSERT_EQUAL(-8, add(-5, -3));
}

void test_add_mixed_numbers(void) {
    TEST_ASSERT_EQUAL(2, add(5, -3));
}

void test_sub_positive_numbers(void) {
    TEST_ASSERT_EQUAL(2, sub(5, 3));
}

void test_sub_negative_numbers(void) {
    TEST_ASSERT_EQUAL(-2, sub(-5, -3));
}

void test_sub_mixed_numbers(void) {
    TEST_ASSERT_EQUAL(8, sub(5, -3));
}


void test_mul_positive_numbers(void) {
    TEST_ASSERT_EQUAL(15, mul(5, 3));
}

void test_mul_negative_numbers(void) {
    TEST_ASSERT_EQUAL(15, mul(-5, -3));
}

void test_mul_mixed_numbers(void) {
    TEST_ASSERT_EQUAL(-15, mul(5, -3));
}

void test_div_positive_numbers(void) {
    TEST_ASSERT_EQUAL(1, div(5, 3));
}

void test_div_negative_numbers(void) {
    TEST_ASSERT_EQUAL(2, div(-6, -3));
}

void test_div_mixed_numbers(void) {
    TEST_ASSERT_EQUAL(-5, div(-15, 3));
}

void test_mod_positive_numbers(void) {
    TEST_ASSERT_EQUAL(2, mod(5, 3));
}

void test_mod_negative_numbers(void) {
    TEST_ASSERT_EQUAL(1, mod(-7, -3));
}

void test_mod_mixed_numbers(void) {
    TEST_ASSERT_EQUAL(3, mod(-15, 4));
}


int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_negative_numbers);
    RUN_TEST(test_add_mixed_numbers);

    RUN_TEST(test_sub_positive_numbers);
    RUN_TEST(test_sub_negative_numbers);
    RUN_TEST(test_sub_mixed_numbers);

    RUN_TEST(test_mul_positive_numbers);
    RUN_TEST(test_mul_negative_numbers);
    RUN_TEST(test_mul_mixed_numbers);

    RUN_TEST(test_div_positive_numbers);
    RUN_TEST(test_div_negative_numbers);
    RUN_TEST(test_div_mixed_numbers);

    RUN_TEST(test_mod_positive_numbers);
    RUN_TEST(test_mod_negative_numbers);
    RUN_TEST(test_mod_mixed_numbers);
    return UNITY_END();
}
