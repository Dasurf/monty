#include "ds_monty.h"

/**
 * ds_add - adds the top two elements of the stack.
 * @head: stack head
 * @count: line_number
 * Return: nothing
*/

void ds_add(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->num + h->next->num;
	h->next->num = aux;
	*head = h->next;
	free(h);
}
