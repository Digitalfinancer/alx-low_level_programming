#include "main.h"

/**
 *int print_last_digit - function that prints the last digit of a number
 * @n: The input number as an integer.
* Return: last digit
*/
int print_last_digit(int)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
	_putchar('\n');
}
