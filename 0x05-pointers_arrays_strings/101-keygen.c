#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * generate_password - Generates a random password.
 *
 * Return: The generated password as a dynamically allocated string.
 */
char *generate_password(void)
{
static const char charset[] =
"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));

if (password == NULL)
{
fprintf(stderr, "Memory allocation failed.\n");
exit(1);
}

srand(time(NULL));

for (int i = 0; i < PASSWORD_LENGTH; i++)
{
int random_index = rand() % (sizeof(charset) - 1);
password[i] = charset[random_index];
}
password[PASSWORD_LENGTH] = '\0';

return (password);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
char *password = generate_password();

printf("Generated Password: %s\n", password);

free(password);

return (0);
}

