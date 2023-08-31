#include <unistd.h>
#include "main.h"

/**
 * _putchar - This writes the character c to stdout.
 * @c: Character to print.
 * Return: 1 On success.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
