#include "ds_monty.h"
/**
  *ds_sub- sustration
  *@head: stack head
  *@count: line_number
  *Return: nothing
 */
void ds_sub(stack_t **head, unsigned int count)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->num - aux->num;
	aux->next->num = sus;
	*head = aux->next;
	free(aux);
}
