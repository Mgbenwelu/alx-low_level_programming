#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: Prints the lowercase alphabet in reverse
 * Return: Always0(Success)
 */

int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}

