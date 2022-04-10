/*
 *File: 5-print_numbers.c
 *Authour: Bestor Kingsley
 */
#include <stdio.h>
/**
 * main - prints numbers of base 10 from 0-9.
 *
 * Return: Always 0 Success
 */

int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}

