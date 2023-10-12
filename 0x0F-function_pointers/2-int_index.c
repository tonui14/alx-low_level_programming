#include "function_pointers.h"
/**
 * int_index - return index place if true
 * if not -1
 * @array: this is the array expected
 * @size: this is the size of elements in array
 * @cmp: pointer to the function
 *
 * Return: (0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
