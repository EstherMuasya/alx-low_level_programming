#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
  * print_alphabet_x10 - prints the alphabet 10 times in lowercase
  * Return: Nothing
  */
void print_alphabet_x10(void)
{
	char ch;
	int j;

	for (j = 48; j  < 58; j++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar (ch);
		_putchar ('\n');
	}
}
