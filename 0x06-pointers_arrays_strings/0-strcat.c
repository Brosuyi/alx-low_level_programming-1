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
 * _strcat - concatenates two strings
 * @src: the first string
 * @dest: the second string
 * Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int length = _strlen(dest);
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + length + i) = *(src + i);
	}
	*(dest + length + i) = '\0';

	return (dest);
}
