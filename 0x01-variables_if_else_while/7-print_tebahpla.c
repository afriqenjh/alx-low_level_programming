#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase and in reverse.
 * Return: Always 0
 */
int main(void)
{
	char sm;

	for (sm = 'z'; sm >= 'a'; sm--)
	{
		putchar(sm);
	}
	putchar('\n');
	return (0);
}
