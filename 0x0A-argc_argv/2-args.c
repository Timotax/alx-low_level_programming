#include <stdio.h>

/**
 * main - prints all arg it receives
 * @argc: number of command line arguments
 * @argv: array that contains the program aommand line arguments
 * Return: 0 (success)
 */
int main(int argc, int *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
