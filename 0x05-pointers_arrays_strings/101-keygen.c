#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PASSWORD_LENGTH 256

/**
 * generate_password - Generates a random password.
 *
 * Return: The generated password as a dynamically allocated string.
 */

char* generate_password() {
char* password = (char*)malloc(MAX_PASSWORD_LENGTH * sizeof(char));
FILE* pipe = popen("./101-keygen", "r");
if (pipe == NULL)
{
printf("Error executing 101-keygen.\n");
exit(1);
}
fgets(password, MAX_PASSWORD_LENGTH, pipe);
pclose(pipe);
password[strcspn(password, "\n")] = '\0';  // Remove trailing newline character
return password;
}

int main(void) 
{
char* password = generate_password();
printf("Generated password: %s\n", password);
free(password);
return 0;
}

