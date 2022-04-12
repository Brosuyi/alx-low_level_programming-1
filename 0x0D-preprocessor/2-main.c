#include "main.h"

/**
 *
 */

void main(void)
{
	char *s = __FILE__;
	
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
}
