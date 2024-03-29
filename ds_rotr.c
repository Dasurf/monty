#include "ds_monty.h"
/**
  *ds_rotr- rotates the stack to the bottom
  *@head: stack head
  *@count: line_number
  *Return: nothing
 */

void ds_rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *copy;

	copy = *head;
	if ((*head)->next == NULL || *head == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
