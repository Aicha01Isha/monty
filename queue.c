#include "monty.h"

/**
 * f_queue - prints the top
 * @head: parameter
 * @counter: parameter
 * Return: 0 on success
*/

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: parameter
 * @head: parameter
 * Return: 0 on success
*/

void addqueue(stack_t **head, int n)
{
	stack_t *n_nod, *au;

	au = *head;
	n_nod = malloc(sizeof(stack_t));
	if (n_nod == NULL)
	{
		printf("Error\n");
	}
	n_nod->n = n;
	n_nod->next = NULL;
	if (au)
	{
		while (au->next)
			au = au->next;
	}
	if (!au)
	{
		*head = n_nod;
		n_nod->prev = NULL;
	}
	else
	{
		au->next = n_nod;
		n_nod->prev = au;
	}
}
