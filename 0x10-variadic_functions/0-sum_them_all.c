#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - Entry Point of variadic function.
* @n: variadic function input.
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list argp
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(argp, n); /*Initializing the argument list*/

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argp, const unisigned int); /*Get the next argument value*/
	}

	va_end(argp);

	return (sum);
}
