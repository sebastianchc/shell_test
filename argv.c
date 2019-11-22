#include "shell.h"

/**
 * main - Print arguments.
 * @av: Arguments.
 * @ac: Number of arguments.
 *
 * Return: Always 0.
 */

int main(__attribute__((unused))int ac, char **av)
{
	unsigned int i, j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			putchar(av[i][j]);
			j++;
		}
		putchar('\n');
		i++;
	}
	return (0);
}
