#include "main.h"

/**
 * puts2 - print every other char of a string
 * @str: char array of string type
 * Description: Print all characters of a string
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
			_putchar(str[a]);
			_putchar('\n');
	}
}
