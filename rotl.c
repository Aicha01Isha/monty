#include "monty.h"

/**
 * f_rotl- rotates the stack to the top
 * @head: parameter
 * @counter: parameter
 * Return: 0 on success
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *t = *head, *au;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	au = (*head)->next;
	au->prev = NULL;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = *head;
	(*head)->next = NULL;
	(*head)->prev = t;
	(*head) = au;
}
