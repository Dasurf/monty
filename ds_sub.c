#include "ds_monty.h"
/**
  *ds_sub- sustration
  *@head: stack head
  *@count: line_number
  *Return: nothing
 */
void ds_sub(stack_t **head, unsigned int count)
{
	stack_t *output;
	int sus, nodes;

	output = *head;
	for (nodes = 0; output != NULL; nodes++)
		output = output->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	output = *head;
	sus = output->next->num - output->num;
	output->next->num = sus;
	*head = output->next;
	free(output);
}

