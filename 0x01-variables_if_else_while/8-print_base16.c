#include <stdio.h>

/**
 * main - Program starts here
 * Description: Prints the numbers of base 16 in lowercase
 * Return: Always0(Success)
 */

int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
putchar(digit);
for (digit = 'a'; digit <= 'f'; digit++)
putchar(digit);
putchar('\n');
return (0);
}

