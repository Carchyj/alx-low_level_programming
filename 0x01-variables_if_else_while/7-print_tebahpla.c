#include <stdio.h>

/**
*main - proogram that prints the lowercase alphabets in reverse.
*
*Return: always 0(success)
*/
int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch++)
	{
		putchar(ch);
	}
	putchar(10); /*Ascii code for a new line*/
	return (0);
}
