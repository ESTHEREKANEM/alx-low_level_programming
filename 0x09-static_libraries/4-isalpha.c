#include "main.h"

/**
 * _isalpha - this function checks for alphabetic character
 *
 * @c: is the int that will be used for the function
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else

	return (0);
}
