#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longs = 0;
	int o;

	while (*s != '\0')
	{
		longs++;
		s++;
	}
	s--;
	for (o = longs; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
