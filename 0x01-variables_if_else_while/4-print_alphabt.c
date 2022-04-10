/*
 *File: 4-print_alphabt.c
 *Authour: Bestor Kingsley
 */
#include <stdio.h>
/**
 * main - prints alphabets in lowercase, and skips e and q.
 *
 * Return: Always 0 Success
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e')
		{
			continue;
		}
		else if (alphabet == 'q')
		{
			continue;
		}
		putchar(alphabet);
	}
	printf("\n");
	return (0);
}
