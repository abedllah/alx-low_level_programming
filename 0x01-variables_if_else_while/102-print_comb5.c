#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 * Numbers should range from 0 to 99, be printed with two digits,
 * and separated by a space.
 * The combination of numbers must be separated by comma, followed by a space.
 * Combinations should be printed in ascending order.
 * 00 and  00 are considered as the same combination of the numbers 0 and 1.
 * Use only the putchar function .
 * Use putchar eight times maximum in your code.
 * Not allowed to use any variable of type char.
 *
 * Return: Always 0
 */
int main(void)
{
	int num1, num2, comma_flag;

	comma_flag = 0;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = 0; num2 < 100; num2++)
		{
			if (num1 < num2)
			{
				if (comma_flag == 1)
				{
					putchar(',');
					putchar(' ');
				}
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');

				comma_flag = 1;
			}
		}
	}

	putchar('\n');

	return (0);
}

