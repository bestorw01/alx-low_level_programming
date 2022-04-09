/*
 *File: 1-last_digit.c
 *Authour: Bestor Kingsley
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - prints a random number, and check last if digit
 *       is greater than 5, is 0 or is less than 6 not 0
 *
 *Return: Always 0 Success
 */
int main(void)
{
	int n, l;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*gets last digit of a number*/
	l = n % 10;

	if (l > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, l);
	}
	else if (l == 0)
	{
		printf("%s %d is %d and is 0\n", str, n, l);
	}
	else if (l < 6)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, l);
	}

	return (0);
}
