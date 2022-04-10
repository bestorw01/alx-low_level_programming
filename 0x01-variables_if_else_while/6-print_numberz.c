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
	unsigned char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	printf("\n");
	return (0);
}

