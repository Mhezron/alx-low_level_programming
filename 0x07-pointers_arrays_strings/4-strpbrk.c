#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - returns the pointer to the byte in s
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

