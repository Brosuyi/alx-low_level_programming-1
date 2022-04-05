#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line.
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int length;
	
	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}
	
	for (; length > 0; length--, s--)
	{
		_putchar (*s);
	}
	_putchar ('\n');
}
