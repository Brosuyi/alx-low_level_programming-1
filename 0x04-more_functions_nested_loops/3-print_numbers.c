#include "main.h"

/**
 * print_numbers - print numbers 0 to 9 followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
