#include "main.h"

/**
 * print_rev - function that prints a given string in reverse, then a new line
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int a, b, tmp;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	tmp = a;

	for (b = len - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
