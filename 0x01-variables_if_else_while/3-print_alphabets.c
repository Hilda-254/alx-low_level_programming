#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lowercase
 * and in the uppercase, follow by a newline
 * Return: o
 */
int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
