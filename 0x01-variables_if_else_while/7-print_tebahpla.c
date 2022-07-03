#include <stdio.h>

/**
*main - proogram that prints the lowercase alphabets in reverse.
*
*Return: always 0(success)
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch++)
	{
		putchar(ch);
	}
	putchar(10); /*Ascii code for a new line*/
	return (0);
}
