#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Return: Always 1 for (success) otherwise 0
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')

		return (1);

	else

	return (0);
}
