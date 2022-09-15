#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
