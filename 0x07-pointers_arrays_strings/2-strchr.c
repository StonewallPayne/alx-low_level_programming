#include "main.h"

/**
 * _strchr -> string character
 * @s: string given
 * @c: another char
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int p, n, i, j;

	n = sizeof(*s) / sizeof(s[0]);
	p = 0;

	while (p < n)
	{
		if (s[p] == c)
		{
			i = 1;
			for (j = 0; j < n && s[p] != '\0'; j++)
			{
				s[j] = s[p];
				p++;
			}
			for ( ; j < n; j++)
			{
				s[j] = '\0';
			}
			p = n + 1;
		}
		if (p == n)
		{
			i = 0;
		}
		p++;
	}

	if (i == 1)
	{
		return (s);
	}
	else
		return (NULL);
}
