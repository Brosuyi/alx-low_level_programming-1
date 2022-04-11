#include "main.h"

/**
 * _strlen - length of a string
 * @s: the string to check
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}

/**
 * _strncpy - copys a string to another string upto the nth element
 * @src: the first string
 * @dest: the second string
 * @n: number of bytes to get from src
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length = _strlen(dest);
	int i;

	for (i = 0; *(src + i) != '\0' && n > 0; i++, n--)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';

	return (dest);
}
