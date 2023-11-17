#include "main.h"

/**
 * main - prompt for users to type in a command and get tghe output get
 * @ac : argument count
 * @argv : argument vector
 */

int main(int ac, char *argv)
{
	char *prompt ="$ ";
	char *lineptr;
	size_t n = 0;
	ssize_t n_read;

	(void)ac;
	(void)argv;
	while (1)
	{
		printf("%s", prompt);
		n_read = getline(&lineptr, &n , stdin);
		if (n_read == -1)
			printf("exiting shell");
		printf("%s", lineptr);
	}
	free(lineptr);
	return (0);
}
