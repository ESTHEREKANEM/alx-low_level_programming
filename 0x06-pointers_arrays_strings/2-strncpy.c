#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: buffer storing the sting copy
 * @src: the source string
 * @n: max number of byte copied
 * Returns: returns 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for ( ; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
