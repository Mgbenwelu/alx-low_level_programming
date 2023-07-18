#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Program starts here
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}

