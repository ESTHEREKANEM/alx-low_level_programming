#include "main.h"

/**
 * _strcat - concatenates the sting pointed to by @src
 * the end of the string pointed to by @dest
 * @src: string to be concatenated upon
 * @dest: string that will be appended
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index - 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
