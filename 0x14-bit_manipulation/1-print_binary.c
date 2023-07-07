#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int d, strt = 0;
	unsigned long int begin;

	for (d = 63; d >= 0; d--)
	{
		begin = n >> d;

		if (begin & 1)
		{
			_putchar('1');
			strt++;
		}
		else if (strt)
			_putchar('0');
	}
	if (!strt)
		_putchar('0');
}
