#include <stdio.h>

/**
 * main - Program starts here
 * Description: Prints possible combinations of single-digit numbers
 * Return: Always0(Success)
 */

int main(void)
{
int number;
putchar('0');
putchar(',');
putchar(' ');
for (number = 1; number < 10; number++)
{
putchar(number + '0');
if (number != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

