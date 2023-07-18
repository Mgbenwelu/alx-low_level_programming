#include <stdio.h>

/**
 * main - Prints the lowercase alphabet followed by a new line.
 * Description: Lowercase alphabet 'a' to 'z' then, a new line character '\n'.
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}

