#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function for addition
 * @a: input int
 * @b: input int
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to calucalte the difference
 * @a: input int
 * @b: input int
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to calculate the multiple
 * @a: input int
 * @b: input int
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to calculate division
 * @a: input int
 * @b: input int
 * Return: the result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - function that return remainder
 * @a: input int
 * @b: input int
 * Return: the result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}

	return (a % b);
}
