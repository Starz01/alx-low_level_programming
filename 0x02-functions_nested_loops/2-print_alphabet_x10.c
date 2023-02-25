#include "main.h"
/**
*print_alphabet_x10 - Entry point
*
*prints alphabetical letters 10 times
*
*Return: void
*/
void print_alphabet_x10(void)
{
int a, n = 0;
do {
a = 97;
for (; a <= 122; a++)
{
_putchar(a);
}
_putchar('\n');

++n;
}

while
(n < 10);
}
