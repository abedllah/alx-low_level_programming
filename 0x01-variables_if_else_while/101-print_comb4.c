#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations.
 * Numbers must be separated .
 * 012, 120, 102, 021, 201, 210 are considered .
 * Print only the smallest combination of three digits.
 * Numbers should be printed in ascending order, with three digits.
 * Use only the putchar function.
 * Use putchar six times maximum in your code.
 * Not allowed to use any variable of type char.
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 1000; i++)
	{
		j = (i / 100) % 10;
		k = (i / 10) % 10;

		if (j < k && k < i % 10)
		{
			putchar((i / 100) + '0');
			putchar((i / 10) % 10 + '0');
			putchar(i % 10 + '0');

			if (i < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

