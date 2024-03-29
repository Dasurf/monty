#include "ds_monty.h"
/**
  *ds_rotl- rotates the stack to the top
  *@head: stack head
  *@count: line_number
  *Return: nothing
 */
void ds_rotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *head, *output;

	if ((*head)->next == NULL || *head == NULL)
	{
		return;
	}
	output = (*head)->next;
	output->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = output;
}
