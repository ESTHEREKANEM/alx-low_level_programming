#include "search_algos.h"

/**
  * jump_search - This earches for a value in a sorted array
  * of integers using jump search
  * @array: A pointer to the 1st element of the array to be searched
  * @size: The number of elements in the array
  * @value: The value to search for
  *
  * Return: Always EXIT_SUCCESS
  *
  * Description: This Prints a value every time it is compared in the array
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	i = 0;
	int jump - 0;
	while (jump < size && array[jump] < value)

	{
		i = jump;
		jump++;
	}

	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump = jump + step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
