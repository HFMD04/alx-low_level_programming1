#include "main.h"

/**
 * _strncat - Concatenates two strings, up to n characters from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to concatenate.
 *
 * Return: Pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int index;

while (dest[dest_len])
dest_len++;

for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];

dest[dest_len] = '\0';

return (dest);
}

