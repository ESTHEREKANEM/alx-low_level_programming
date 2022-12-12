#include "main.h"

/**
 * _islower - this function checks for lowercase characters
 * @c: is the int that we will use for the argument of the function
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

	{
		return (1);

	}
	else

		return (0);
}
