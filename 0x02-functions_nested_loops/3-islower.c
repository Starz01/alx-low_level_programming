#include "main.h"

/**
*_islower - checks for lowercase character
*
*@c:parameter for which we are checking whether it's lowercase
*Return: c is lowercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);

	}
	else
	return (0);
}

