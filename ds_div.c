#include "ds_monty.h"
/**
 * ds_div - divides the top two elements of the stack.
 * @head: stack head
 * @count: line_number
 * Return: nothing
*/
void ds_div(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, output;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->num == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	output = h->next->num / h->num;
	h->next->num = output;
	*head = h->next;
	free(h);
}
