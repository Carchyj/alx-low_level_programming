#include "main.h"

/**
*_isalpha - checks for alphabetic characters.
*@c: character
*Return: returns 1 or 0 depending on the conditions.
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
