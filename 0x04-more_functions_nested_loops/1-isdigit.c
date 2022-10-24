#include "main.h"

/**
 * _isdigit - check if a character is an digit (0 to 9)
 *
 * @c: int to be tested
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
