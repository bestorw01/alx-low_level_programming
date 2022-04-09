/*
 *File: 2-print_alphabet.c
 *Authour: Bestor Kingsley
 */
#include <stdio.h>
/**
 * main - prints alphabets in lowercase.
 *
 * Return: Always 0 Success
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
		printf("\n");
	}
	return (0);
}
