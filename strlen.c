#include "shell.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String.
 *
 * Return: Length of s.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\n')
	{
		i++;
	}
	return (i);
}
