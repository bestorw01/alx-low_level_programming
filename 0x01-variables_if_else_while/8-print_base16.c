/*
 *File: 8-print_base6.c
 *Authour: Bestor Kingsley
 */
#include <stdio.h>
/**
 * main - prints numbers of base 6 .
 *
 * Return: Always 0 Success
 */

int main(void)
{
	char number, alphabet;
	
	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	printf("\n");
	return (0);
}


