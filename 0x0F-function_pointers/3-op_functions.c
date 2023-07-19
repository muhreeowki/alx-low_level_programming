#include "3-calc.h"


/**
 * op_add - adds two numbers
 *
 * @a: addend
 * @b: addend
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtructs two numbers
 *
 * @a: minuend
 * @b: subtrahend
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 *
 * @a: multiplicand
 * @b: multiplier
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 *
 * @a: dividend
 * @b: divisor
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - adds two numbers and returns the summ
 *
 * @a: dividend
 * @b: divisor
 *
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
