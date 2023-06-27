#include "main.h"
/**
 * _strcpy - Copy a string
 * @dest: destination value
 * @src: source value
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ptr);
}

