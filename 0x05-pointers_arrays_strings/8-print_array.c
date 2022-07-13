#include "main.h"
#include <stdio.h>

/**
 * print_array - prints x elements of an array of integers
 * @a: input array
 * @x: input x element
 * Return: no return
 */
void print_array(int *a, int x)
{
	int i = 0;

	for (; i < x; i++)
	{
		printf("%d", *(a + i));
		if (i != (x - 1))
			printf(", ");
	}
	printf("\n");
}
