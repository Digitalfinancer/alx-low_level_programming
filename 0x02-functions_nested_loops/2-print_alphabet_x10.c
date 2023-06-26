#include "main.h"

/**
 * print_alphabet_x10 -  Write a function that prints 10 times the alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 122; j++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
