#include "search_algos.h"

/**
  * binary_search - It searches for a value in a sorted array
  * of integers using binary search
  * @array: A pointer to the first element of the array to search
  * @size: The number of elements in the array
  * @value: The value to search for
  *
  * Return: always successful (-1).
  *
  * Description: Prints the sub array that is searched after each change.
  */

int binary_search(int *array, size_t size, int value)
{
    size_t s, left, right;

    if (array == NULL)
        return (-1);

    left = 0;
    right = size - 1;
    while (right >= left)
    {
        printf("Searching in array: ");
        for (s = left; s < right; s++)
            printf("%d, ", array[s]);
        printf("%d\n", array[s]);

        s = left + (right - left) / 2;
        if (array[s] == value)
            return (s);
        if (array[s] > value)
            right = s - 1;
        else
            left = s + 1;
    }

    return (-1);
}

