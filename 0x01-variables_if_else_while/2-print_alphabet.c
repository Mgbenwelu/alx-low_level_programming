#include <stdio.h>
/**
 * main - Program starts here
 * Description: This prints the lowercase alphabet followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}

