#include "main.h"

/**
 * main - entry into interpreter
 * @argc: argc counter
 * @argv: arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd, len_read = 0;
	char *buffer;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Can't open file <file>");
		exit(EXIT_FAILURE);
	}
	buffer = _calloc(6000, sizeof(char *));
	if (buffer == NULL)
	{
		return (NULL);
	}
	len_read = read(fd, buffer, 6000);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		exit(EXIT_FAILURE);
	}
	
