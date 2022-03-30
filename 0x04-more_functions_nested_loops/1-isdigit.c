#include "main.h"

/**
 * _isdigit - check for numerical character
 * @c: the character to test for uppercase
 *
 * Return: 1 if is digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
