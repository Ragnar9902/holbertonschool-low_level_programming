#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : pointer of string
 * Return : the len of String i
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
