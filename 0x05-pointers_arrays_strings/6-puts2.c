#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * chracter.
 * @str: parameter to the put function.
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
