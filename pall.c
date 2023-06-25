#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: parameter
 * @counter: parameter
 * Return: 0 on success
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *a;
	(void)counter;

	a = *head;
	if (a == NULL)
		return;
	while (a)
	{
		printf("%d\n", a->n);
		a = a->next;
	}
}
