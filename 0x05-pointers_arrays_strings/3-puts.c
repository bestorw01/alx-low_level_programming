#include "main.h"

/**
 * _puts - prints a string in stdout
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;
	char *c

	c = str;

	for (i = 0; c[i]; i++)
	{
		_putchar (c[i]);
	}
	_putchar('\n');
} 
