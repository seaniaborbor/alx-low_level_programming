#include "main.h"

/**
 * _isupper - checks for uppecase character
 * @c: value of integer
 *
 * Return: 1 if c is uppercase; 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
