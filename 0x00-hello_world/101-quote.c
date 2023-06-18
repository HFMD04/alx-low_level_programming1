#include <unistd.h>

/**
* main - Entry point
*
* Description: print a quote to the standard error
*
* Return: 1 (not success)
*/
int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(2, quo, 59);
return (1);
}
