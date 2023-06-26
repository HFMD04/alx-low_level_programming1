#include <stdio.h>

/**
 * _strlen - Return the length of a string.
 * @str: The string to get the length of
 * Return: the lenght of @str.
 */
size_t _strlen(const char *str)
{
size_t lenght = 0;

while (*str++)
lenght++;
return (lenght);
}
