#include "monty.h"

/**
 * addnode - add node to the head stack
 * @head: parameter
 * @n: parameter
 * Return: 0 on success
*/

void addnode(stack_t **head, int n)
{

	stack_t *n_nod, *au;

	au = *head;
	n_nod = malloc(sizeof(stack_t));
	if (n_nod == NULL)
	{
		printf("Error\n");
		exit(0); 
	}
	if (au)
		au->prev = n_nod;
	n_nod->n = n;
	n_nod->next = *head;
	n_nod->prev = NULL;
	*head = n_nod;
}
