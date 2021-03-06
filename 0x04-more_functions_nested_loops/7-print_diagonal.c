#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal.
* @n: is the number of times the character \ should be printed
* Return: \.
*/
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');

	while (b < n)
	{
		while (a < b)
		{
			_putchar(' ');
			a++;
		}

		a = 0;
		_putchar('\\');
		_putchar('\n');
		b++;
	}
}
