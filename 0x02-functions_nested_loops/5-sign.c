#include "main.h"
/**
 * print_sign - Check Holberton
 * @n: An input number
 * Description: Tohis function prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */
int print_sign(int n)
{
	int x = 0;

	if (n > 0)
	{
		_putchar('+');
		x = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('-');
		x = -1;
	}
	return (x);
}
