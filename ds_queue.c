#include "ds_monty.h"
/**
 * ds_queue - prints the top
 * @head: stack head
 * @count: line_number
 * Return: nothing
*/

void ds_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: nothing
*/

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *output;

	output = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->num = n;
	new_node->next = NULL;
	if (output)
	{
		while (output->next)
			output = output->next;
	}
	if (!output)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		output->next = new_node;
		new_node->prev = output;
	}
}
