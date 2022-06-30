#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: min value.
 * @max: max value.
 *
 * Return: pointer to the array, or NULL if it fails.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min) * sizeof(int) + sizeof(int));

	if (!arr)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		arr[i] = i + min;

	return (arr);
}
