#include "monty.h"

/**
 * f_pop - prints the top
 * @head: parameter
 * @counter: parameter
 * Return: 0 on success
*/

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *a;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	*head = a->next;
	free(a);
}
