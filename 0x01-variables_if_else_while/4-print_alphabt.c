#include <stdio.h>

/**
*main - program that prints the alphabet in lowercase, except q and e.
*
*Return: always 0(success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar(10); /*Ascii code for a new line*/
	return (0);
}
