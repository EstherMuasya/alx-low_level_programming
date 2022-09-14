#include "main.h"
/**
 * print_last_digit - Check Holberton
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
	if (r < 0)
	{
		_putchar ((-1 * (r % 10) + '0'));
	}
	else
	{
		_putchar((r % 10) + '0');
	}
	return (0);
}
