#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be returned
 *
 * Return: length of string s.
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
