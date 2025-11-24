#include "unity.h"
#include "main.h"
// Прототип функции из main.c
//int add(int a, int b);

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

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_negative_numbers);
    RUN_TEST(test_add_mixed_numbers);
    return UNITY_END();
}
