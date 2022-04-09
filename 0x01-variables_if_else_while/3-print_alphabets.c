/*
 *File: 2-print_alphabet.c
 *Authour: Bestor Kingsley
 */
#include <stdio.h>
/**
 * main - prints alphabets in lowercase to Uppercase.
 *
 * Return: Always 0 Success
 */

int main(void)
{
	char lowAlphabet, upperAlphabet;

	for (lowAlphabet = 'a'; lowAlphabet <= 'z'; lowAlphabet++)
	{
		putchar(lowAlphabet);
	}
	for (upperAlphabet = 'A'; upperAlphabet <= 'Z'; upperAlphabet++)
	{
		putchar(upperAlphabet);
	}
	printf("\n");
	return (0);
}

