#include <stdio.h>
#include <stdlib.h>

/*
 * Main - Main block entry
 * Description: A random number is generated we get the last digit and contrast it with 5
 * End the main function by return 0;
 */

void main ()
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
