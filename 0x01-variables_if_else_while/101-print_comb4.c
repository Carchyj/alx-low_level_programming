#include <stdio.h>
/**
*main - program that prints all possible different combinations of three digit.
*
*Return: always 0(success)
*/
int main(void)
{
	int m;
	int n;
	int y;

for (m = 48; m < 58; m++)
{
for (n = 49; n < 58; n++)
{
for (y = 50; y < 58; y++)
{
if (y > n && n > m)
{
putchar(m);
putchar(n);
putchar(y);
if (m != 55 || n != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
