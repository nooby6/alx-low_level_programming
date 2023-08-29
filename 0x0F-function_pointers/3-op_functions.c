#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: 1st no.
 * @b: 2nd no.
 * Return: sum of a and b (success)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @a: 1st no.
 * @b: 2nd no.
 * Return: The difference of a and b (success)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers.
 * @a: 1st no.
 * @b: 2nd no.
 * Return: Prod a and b (success)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns division of two numbers.
 * @a: 1st no.
 * @b: 2nd no.
 * Return: quotient of a and b (success)
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division
 * @a: 1st no.
 * @b: 2nd no.
 * Return: rem of %a and b (success)
 */
int op_mod(int a, int b)
{
	return (a % b);
}

