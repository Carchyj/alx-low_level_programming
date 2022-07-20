#include  "main.h"

/**
 * _puts - function that puts.
 * @str: parameter for thr put function.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
