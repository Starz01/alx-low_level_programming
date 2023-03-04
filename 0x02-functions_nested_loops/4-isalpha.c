#include "main.h"

/**
*_isalpha - checks for alphabetic character
*
*@c: parameter which the function checks
*Return: returns 1 for yes and 0 otherwise
*
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
		return (0);
}

