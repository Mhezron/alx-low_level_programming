#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block entry, the beginning of function
 * Description: prints all single digit numbers of base 10
 * start = 0,add a new line
 * Return: 0
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
