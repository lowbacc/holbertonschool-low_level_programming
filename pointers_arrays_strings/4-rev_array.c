#include "main.h"

/**
 * reverse_array - Entry point
 * @a: array
 * @n: element in array
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int tmp;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
