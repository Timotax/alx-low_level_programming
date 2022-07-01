#include <stdio.h>

/**
 * main - Print the alphebet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i=0; 1 < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
