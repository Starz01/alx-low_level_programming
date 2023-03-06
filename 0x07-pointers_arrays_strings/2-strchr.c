#include "main.h"
/**
*_strchr - locates a character in a string
*
*@s: a string where a character is to be located
*@c: a character to be located from the string
*Return: returns 0 after termination
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
