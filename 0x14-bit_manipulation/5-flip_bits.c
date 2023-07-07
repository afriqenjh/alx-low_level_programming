#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d, strt = 0;
	unsigned long int begin;
	unsigned long int special = n ^ m;

	for (d = 63; d >= 0; d--)
	{
		begin = special >> d;
		if (begin & 1)
			strt++;
	}

	return (strt);
}
