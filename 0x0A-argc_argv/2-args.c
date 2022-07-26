#include <stdio.h>

/**
 * main - prints all arg it receives
 * @argc: number of command line arguments
 * #argv: array that contains the program aommand line arguments
 * Return: 0 (success)
 */
int main(int argc, int *argv[])
{
	int write;

	for (write = 0; write < argc; write++)
	{
		printf("%s\n", argv[write]);
	}
	return (0);
}
