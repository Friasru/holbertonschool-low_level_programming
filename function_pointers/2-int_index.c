#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array of integers to search
 * @size: the number of elements in array
 * @cmp: pointer to the comparison function
 *
 * Return: index to the first element for which cmp does not return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	return (-1);

	for (i = 0; i < size; i++)
	{
		if  (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
