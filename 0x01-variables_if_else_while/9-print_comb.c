#include <stdio.h>

/**
*main - program that prints all combintion of single numbers.
*single numbers: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9.
*
*Return: always 0(success)
*/
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}

