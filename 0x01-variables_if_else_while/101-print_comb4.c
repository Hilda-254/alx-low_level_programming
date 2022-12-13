#include <stdio.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * You can only use the putchar function
 * (every other function(printf, puts, etc...) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type chare
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == tens) || (tens == hundreds) ||
							(tens > ones) || (hundreds > tens)))
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundreds == '7' && tens == '8'))

					{
						putchar(',');
						putchar(' ');
					}

				}

			}

		}

	}
	putchar('\n');
	return (0);
}
