#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, except 4 and 2.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		if (!(c == '4' || c == '2'))
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
