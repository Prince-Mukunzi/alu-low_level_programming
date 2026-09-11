#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 97;
	while (x < 123)
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}