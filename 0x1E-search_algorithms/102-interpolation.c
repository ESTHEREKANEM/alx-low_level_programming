#include "search_algos.h"

/**
  * interpolation_search -It Searches for a value in a sorted array
  * of integers using interpolation search
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array
  * @value: The value to search
  *
  * Return: Always EXIT_SUCCESS
  *
  * Description: This Prints a value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	while (r >= l)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			if (array[i] < value)
				l = i + 1;
			else
				r = i - 1;
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
	}

	return (-1);
}
