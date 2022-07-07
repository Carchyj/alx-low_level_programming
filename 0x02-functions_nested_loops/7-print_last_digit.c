#include "main.h"

/**
*print_last_digit - prints last digit of a number.
*@y: parameter
*Return: value of the last digit
*/
int print_last_digit(int y)
{
	int x;

	if (y < 0)
		y = -y;
	x = y % 10;
	_putchar(x + '0')
		return (y % 10);
}
