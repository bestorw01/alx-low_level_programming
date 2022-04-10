/*
 *File: 9-print_comb.c
 *Authour: Bestor Kingsley
 */
#include <stdio.h>
/**
 * main - prints numbers of base 10 from 0-9 with space and "," between.
 *
 * Return: Always 0 Success
 */

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	printf("\n");
	return (0);
}

