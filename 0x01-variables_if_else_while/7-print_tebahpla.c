/*
 *File: 7-print_tebaphla.c
 *Authour: Bestor Kingsley
 */
#include <stdio.h>
/**
 * main - prints alphabets in lowercase reversely.
 *
 * Return: Always 0 Success
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	printf("\n");
	return (0);
}

