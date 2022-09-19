#include <unistd.h>
/**
* _putchar - writes the charater c t0 stdout
*  @c: The character to print
* Return: 1 on success
* On error, -1 is returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
