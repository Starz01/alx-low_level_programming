#include "main.h"

/**
*swap_int - Entry point
*@a: integer *a
*@b: integer *b
*/

void swap_int(int *a, int *b)
{
int temp = *a;

*a = *b;
*b = temp;

}
