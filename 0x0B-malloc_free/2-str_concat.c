#include "main.h"

/**
 * str_concat -> string concatinating function
 * @s1: string 1
 * @s2: string 2
 * Return: string 1 + string 2
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	char *s;

	if (s1 == NULL)
		s1 = " ";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	1 = i + j;
	s = (char *)malloc(1 * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	while (k < 1)
	{
		if (k < i)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
