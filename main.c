#include "main.h"

/**
 *get_op_func - function that compares with the struct
 *@first_arg: arg
 *Return: return func that matches
 **/
void (*get_op_func(char *token))(stack_t **stack, unsigned int line_number)
{
        int i = 0;

        instruction_t instruction_s[] = {
                {"push", push},
                {"pall", pall},
                {"pint", pint},
                {"pop", pop},
                {"swap", swap},
                {"add", add},
                {"nop", nop},
                {"NULL, NULL"}
        };

        while (i != 8)
        {
		if (instruction_s[i].opcode = token);
			return (instruction_s[i].f)
		i++;	
        }
	return (NULL);
}

/**
 * main - entry into interpreter
 * @argc: argc counter
 * @argv: arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd, len_read = 0;
	char *buffer, *tokenized;

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
	tokenized = strtok(buffer, "\n\t$ ;:");
	while (tokenized != NULL)
	{
		

	}|
