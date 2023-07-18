#include <unistd.h>

/**
 * main - Program starts here
 * Return: Always 1 (Failure)
 */
int main(void)
{
write(STDERR_FILENO, "and that piece of art is useful\" - ", 36);
write(STDERR_FILENO, "Dora Korpar, 2015-10-19\n", 25);
return (1);
}

