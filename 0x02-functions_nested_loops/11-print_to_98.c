#include "main.h"
/**
 * print_to_98 - Check Holberton
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		x = n++;
		_putchar(',');
		_putchar(' ');

	_putchar  ('\n');
	else if (n == 98)
	{
		continue;
		_putchar(',');
		_putchar(' ');

	_putchar('\n');

	else
	{
		x = n--;
		_putchar(',');
		_putchar(' ');
	}
	}
	}

	_putchar('\n');
	return (x);
}
