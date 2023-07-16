#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits.
 * Numbers must be separated by ', ', and the two digits must be different.
 * 01 and 10 are considered the same combination of the two digits 0 and 1.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * Use only the putchar function .
 * Use putchar five times maximum in your code.
 * Not allowed to use any variable of type char.
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		j = i / 10;
		if (j < i % 10)
		{
			putchar(j + '0');
			putchar(i % 10 + '0');
			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

