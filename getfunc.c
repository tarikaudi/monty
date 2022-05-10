#include "monty.h"
/**
 *get_op_func - function that compares with the struct
 *@first_arg: arg
 *Return: return func that matches
 **/
void get_func(char *input, int number)
{
	char *tokenized;
	unsigned int x;

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

	x = 0;
	while (instruction_s[x].f != NULL)
	{
		if (strcmp(first_arg, instruction_s[x].opcode) == 0)
			return (instrunction_s[x].f);
		x++;
	}
	return (NULL);

	if()
}
