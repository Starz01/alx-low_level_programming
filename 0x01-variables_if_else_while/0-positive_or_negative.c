#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
/* your code goes there */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (0);
}
