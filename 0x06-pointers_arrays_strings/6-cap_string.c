#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to capitalize
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
int i;
int capitalize_next = 1;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
{
capitalize_next = 1;
}
else if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] -= 32;
capitalize_next = 0;
}
}

return (str);
}

