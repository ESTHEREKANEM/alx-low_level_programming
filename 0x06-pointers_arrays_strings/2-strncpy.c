#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: buffer storing the sting copy
 * @src: the source string
 * @n: max number of byte copied
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;

	while (src[b] != '\0' && b < n)
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
