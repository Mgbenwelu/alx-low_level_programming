#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: Print alpabet in lowercase and uppercase followed by a new line
 * Return: Always0(Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}

