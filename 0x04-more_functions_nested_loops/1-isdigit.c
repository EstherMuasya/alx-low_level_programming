#include "main.h"
/**
  * _isdigit - checks for digits (0 through 9)
  * @c: chaaracter to check
  * Return: 1 for success otherwise 0
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
