#include "main.h"

/**
 * _strncpy - copies a string to another string upto the nth element
 * @src: the first string
 * @dest: the second string
 * @n: number of bytes to get from src
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) != '\0' && n > 0; i++, n--)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';

	return (dest);
}
