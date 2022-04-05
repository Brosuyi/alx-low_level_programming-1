#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be returned
 * @len: length of the string s
 *
 * Returns: length of string s.
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
