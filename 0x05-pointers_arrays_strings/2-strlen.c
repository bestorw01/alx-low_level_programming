#include "main.h"
#include <string.h>

/**
* _strlen - Returns the length of a string
* @s: The pointer who's length is returned
*
* Return: 0 for success
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
