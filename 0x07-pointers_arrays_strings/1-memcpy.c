#include "main.h"
/**
*_memcpy - copies memory area
*
*@dest: receives n bytes of memory area src
*@src: memory area where n bytes of memory area is copied from to dest
*@n: number of bytes copied
*Return: returns dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

		j = 0;
	for (i = 0 ; i < n; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
