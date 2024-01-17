#include "ds_monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @count: line_counter
* @file: poiner to monty file
* @content: line content
* Return: nothing
*/
int execute(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", ds_push}, {"pall", ds_pall}, {"pint", ds_pint},
				{"pop", ds_pop},
				{"swap", ds_swap},
				{"add", ds_add},
				{"nop", ds_nop},
				{"sub", ds_sub},
				{"div", ds_div},
				{"mul", ds_mul},
				{"mod", ds_mod},
				{"pchar", ds_pchar},
				{"pstr", ds_pstr},
				{"rotl", ds_rotl},
				{"rotr", ds_rotr},
				{"queue", ds_queue},
				{"stack", ds_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && (op[0] == '#'))
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
