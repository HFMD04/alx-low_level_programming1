#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print a-z using putchar
 *              while using int variable
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int letter = a;

while (letter <= z)
{
/*convert letter to ASCII representation*/
putchar(letter + '0');
letter++;
}
putchar('\n');

return (0);
}

