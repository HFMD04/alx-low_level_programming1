#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the last digit of a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand();

printf("Last digit of %d is %d ", n, n % 10);

int lastDigit = n % 10;

if (lastDigit > 5)
printf("and is greater than 5\n");
else if (lastDigit == 0)
printf("and is 0\n");
else
printf("and is less than 6 and not 0\n");

return (0);
}

