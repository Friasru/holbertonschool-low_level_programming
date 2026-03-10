#include "function_pointers.h"

/**
 * array_interator - executes a function given as parameter
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to the function to execute
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	action(array[i]);
}
