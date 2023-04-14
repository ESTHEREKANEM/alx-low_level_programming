#include "search_algos.h"

/**
 * linear_search - This searches for a value in an array of
 * with the use of linear search algorithms
 *
 * @array: The input array
 * @size: The number of element in the array
 * @value: The value to search
 * Return: Always successful
 */
int linear_search(int *array, size_t size, int value)
{
	size_t s;

	s = 0;

	if (array == NULL)
		return (-1);

	{
	while (s < (int)size)
		s++;
	}

		{
		printf("Value checked array[%ld] = [%d]\n", s, array[s]);
		if (value == array[s])
			return (s);
		}
		return (-1);
}
