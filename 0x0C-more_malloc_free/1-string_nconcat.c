#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: array 1.
 * @s2: array 2.
 * @n:  first n bytes of s2.
 *
 * Return: pointer to the allocated memory, or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con_str;
	unsigned int s1_len, s2_len;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	if (n < s2_len)
		s2_len = n;

	if ((int)n < 0)
		s2_len = 0;

	con_str = malloc(s1_len + s2_len + 1);

	if (con_str == 0)
	{
		return (NULL);
	}

	for (i = 0; i <= s1_len; i++)
		con_str[i] = s1[i];

	for (j = 0; j < s2_len; j++)
		con_str[j + s1_len] = s2[j];

	con_str[j + s1_len] = '\0';

	return (con_str);
}
