/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: returns n number of characters of string accept that are in string s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (n);
}

