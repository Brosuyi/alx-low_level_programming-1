#include "main.h"

/**
 * more_numbers - print numbers 0 to 14 followed by a new line
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, b;

	for (i = 0; i < 10; i++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
				_putchar(b / 10 + '0');

			_putchar(b % 10 + '0');
		}

		_putchar('\n');
	}
}
