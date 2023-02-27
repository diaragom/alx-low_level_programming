#include "main.h"

/**
 * rev_string - reverses the supplied string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	char rev;
	int a, ln, len;

	ln = 0;
	len = 0;

	while (s[ln] != '\0')
	{
		ln++;
	}

	len = ln - 1;

	for (a = 0; a < ln / 2; a++)
	{
		rev = s[a];
		s[a] = s[len];
		s[len--] = rev;
	}
}
