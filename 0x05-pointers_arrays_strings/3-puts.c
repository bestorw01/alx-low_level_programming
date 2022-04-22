#include "main.h"

/**
* _puts - prints a string
* @str: The pointer to an Integer that will be changed
*
* Return: Void for success
*/
void _putd(char *str)
{
	char *c;
	int i;

	c = str;

	for (i = 0; c[i]; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
