#include <stdio.h>

/**
*main - program that will print the alphabet in lowercase,
*and then in uppercase.
*
*Return: always 0(success)
*/
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar(10); /*Ascii code for new line*/
	return (0);
}
