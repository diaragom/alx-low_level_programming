#include "main.h"

/**
 * puts_half - print second half of a given string
 * @str: char array of string type
 * Description: if odd number of chars, print (length_of_string - 1) / 2
 */

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;

	i++;
	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
