#include "monty.h"

/**
 * f_sub- sustration
 * @head: parameter
 * @counter: parameter
 * Return: 0 on success
 */

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *au;
	int s, nod;

	au = *head;
	for (nod = 0; au != NULL; nod++)
		au = au->next;
	if (nod < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	au = *head;
	s = au->next->n - au->n;
	au->next->n = s;
	*head = au->next;
	free(au);
}
