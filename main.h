/**
 * @file main.h
 * @brief Заголовочный файл
 * @details 
 */

#include <stdio.h>

/**
 * @brief Складывает два целых числа.
 * @param a Первое слагаемое.
 * @param b Второе слагаемое.
 * @return Сумма чисел a и b.
 */
int add(int a, int b);

/**
 * @brief Вычитает из первого числа второе.
 * @param a Уменьшаемое.
 * @param b Вычитаемое.
 * @return Разность a и b.
 */
int sub(int a, int b);

/**
 * @brief Умножает два целых числа.
 * @param a Первый множитель.
 * @param b Второй множитель.
 * @return Произведение a и b.
 */
int mul(int a, int b);

/**
 * @brief Делит первое число на второе.
 * @param a Делимое.
 * @param b Делитель (не равен 0).
 * @return Частное a и b.
 * @note Делитель не должен быть 0, иначе возникнет ошибка деления на ноль.
 */
int div(int a, int b);

/**
 * @brief Остаток от деления первого числа на второе.
 * @param a Делимое.
 * @param b Делитель (не равен 0).
 * @return Остаток a % b.
 * @note Делитель не должен быть 0.
 */
int mod(int a, int b);


/**
 * @brief Побитовое И (AND)
 *  Это только прототипы функций, реализация будет добавлена позже.
 * Выполняет побитовое логическое умножение двух целых чисел.
 * 
 * @param a Первое число
 * @param b Второе число
 * @return Результат операции a & b
 */
unsigned int bitwise_and(unsigned int a, unsigned int b);

/**
 * @brief Побитовое ИЛИ (OR)
 * 
 * Выполняет побитовое логическое сложение двух целых чисел.
 * 
 * @param a Первое число
 * @param b Второе число
 * @return Результат операции a | b
 */

unsigned int bitwise_or(unsigned int a, unsigned int b);

/**
 * @brief Побитовое исключающее ИЛИ (XOR)
 * 
 * Выполняет побитовое сложение по модулю 2 двух целых чисел.
 * 
 * @param a Первое число
 * @param b Второе число
 * @return Результат операции a ^ b
 */
unsigned int bitwise_xor(unsigned int a, unsigned int b);

/**
 * @brief Побитовое отрицание (NOT)
 * 
 * Вычисляет побитовое отрицание числа.
 * 
 * @param a Число для инверсии
 * @return Результат операции ~a
 */
unsigned int bitwise_not(unsigned int a);

/**
 * @brief Побитовый сдвиг влево
 * 
 * Сдвигает число влево на n бит.
 * 
 * @param a Число для сдвига
 * @param n Количество бит сдвига
 * @return Результат сдвига a << n
 */
unsigned int bitwise_left_shift(unsigned int a, unsigned int n);

/**
 * @brief Побитовый сдвиг вправо
 * 
 * Сдвигает число вправо на n бит.
 * 
 * @param a Число для сдвига
 * @param n Количество бит сдвига
 * @return Результат сдвига a >> n
 */
unsigned int bitwise_right_shift(unsigned int a, unsigned int n);