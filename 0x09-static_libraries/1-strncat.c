#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 * @n: number
 *
 * Return: return to new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int b = 0;

	while (b < n && *src)
	{
		dest[index + b] = *src;
		src++;
		b++;
	}
	dest[index + b] = '\0';
	return (dest);
}
