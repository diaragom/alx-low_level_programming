#include "main.h"

/**
 * _puts - print a string to standard in/output
 * @str: char array of string type
 * Description: only uses _putchar
 */

void _puts(char *str)
{
	int pr;

	for (pr = 0; str[pr] != '\0'; pr++)
	{
		_putchar(str[pr]);
	}
	_putchar('\n');
}
