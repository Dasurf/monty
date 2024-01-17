#include "ds_monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/

void free_stack(stack_t *head)
{
	stack_t *output;

	output = head;
	while (head)
	{
		output = head->next;
		free(head);
		head = output;
	}
}
