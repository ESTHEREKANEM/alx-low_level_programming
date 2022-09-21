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
	int x;
	int y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
