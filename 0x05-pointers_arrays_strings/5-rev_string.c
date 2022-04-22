#include "main.h"
/**
 * rev_string - reverses a string
 * @s: variable to be used 
 */
void rev_string(char *s)
{
	int i, j, temp, length; 

	while (s[i] != 0)
	{
		i++;
	}

	length = i;
	i = 0;
	j = length - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
