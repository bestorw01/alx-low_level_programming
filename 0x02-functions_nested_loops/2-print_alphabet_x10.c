#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase.
 */
void print_alphabet_x10(void)
{
	int num = 1, nums_of_alphabets = 10;
	char letter;

	while (num <= nums_of_alphabets)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		num++;
	}
}
