#include "ds_monty.h"
/**
 * ds_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @count: line_number
 * Return: nothing
*/
void ds_pstr(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	while (h)
	{
		if (h->num > 127 || h->num <= 0)
		{
			break;
		}
		printf("%c", h->num);
		h = h->next;
	}
	printf("\n");
}
