#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int A;

	for (A = 'a'; A <= 'z'; A++)
	{
		{
			if (A != 'e' && A != 'q')
				putchar(A);
		putchar('\n');
		}
	}

	return (0);
}
