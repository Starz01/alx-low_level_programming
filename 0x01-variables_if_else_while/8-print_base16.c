#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int A;

	for (A = 0; A < 10; A++)
	{
		putchar('0' + A);
	}
	for (A = 97; A < 103; A++)
	{
		putchar(A);
	}
		putchar('\n');

	return (0);
}
