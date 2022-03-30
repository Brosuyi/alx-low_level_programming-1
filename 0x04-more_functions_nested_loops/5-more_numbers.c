#include "main.h"

/**
 * more_numbers - print numbers 0 to 14 followed by a new line
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
