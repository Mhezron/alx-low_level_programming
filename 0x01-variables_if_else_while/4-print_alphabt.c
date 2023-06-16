#include <stdio.h>

/**
 * main - main block
 * Description: Get a random number check its last digit, contrat to 5
 * Return: 0
 */

void main()
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}


