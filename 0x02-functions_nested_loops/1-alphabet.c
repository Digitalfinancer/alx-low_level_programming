#include "main.h"

/**
 * main - Entry point
 * Description: Write a function that prints the alphabet
 * print_alphabet -  Write a function that prints the alphabet, in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
