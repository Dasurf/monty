#include "ds_monty.h"
/**
 * ds_pall - prints the stack
 * @head: stack head
 * @count: no used
 * Return: nothing
*/
void ds_pall(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->num);
		h = h->next;
	}
}
