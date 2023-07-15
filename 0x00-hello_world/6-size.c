#include <stdio.h>

/**
 * main - Program starts here
 *Return: 0 (success)
 */

int main(void)
{
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of short: %zu byte(s)\n", sizeof(int));
printf("Size of int: %zu byte(s)\n", sizeof(long int));
printf("Size of long: %zu byte(s)\n", sizeof(long long int));
printf("Size of long long: %zu byte(s)\n", sizeof(float));

return (0);
}
