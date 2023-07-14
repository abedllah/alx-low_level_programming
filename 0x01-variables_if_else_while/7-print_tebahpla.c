#include <stdio.h>
/**
  *main - entry point
  *Discription: 'checker'
  *Return: always 0
  */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
