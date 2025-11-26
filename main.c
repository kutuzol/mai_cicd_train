/**
 * @file main.c
 * @brief Файл с реализацией арифметических функций
 * @details 
 */


#include "main.h"

/**
 * @brief Складывает два целых числа.
 * 
 * @param a Первое слагаемое.
 * @param b Второе слагаемое.
 * @return Сумма чисел a и b.
 */

int add(int a, int b){
    return a + b;
}

/**
 * @brief Вычитает второе целое число из первого.
 * 
 * @param a Уменьшаемое.
 * @param b Вычитаемое.
 * @return Разность a и b.
 */

int sub(int a, int b){
    return a - b;
}

/**
 * @brief Умножает два целых числа.
 * 
 * @param a Первый множитель.
 * @param b Второй множитель.
 * @return Произведение чисел a и b.
 */

int mul(int a, int b){
    return a * b;
}

/**
 * @brief Делит первое целое число на второе.
 * 
 * @param a Делимое.
 * @param b Делитель (не равен 0).
 * @return Частное a и b.
 * @note Делитель не должен быть 0, иначе произойдет ошибка деления на ноль.
 */

int div(int a, int b){
    return a / b;
}

/**
 * @brief Остаток от деления первого числа на второе.
 * 
 * @param a Делимое.
 * @param b Делитель (не равен 0).
 * @return Остаток a % b.
 * @note Делитель не должен быть 0.
 */

int mod(int a, int b){
    return a % b;
}