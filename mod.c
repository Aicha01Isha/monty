#include "monty.h"

/**
 * f_mod - computes the rest of the division
 * @head: parameter
 * @counter: parameter
 * Return: 0 on success
*/

void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *a;
	int l = 0, au;

	a = *head;
	while (a)
	{
		a = a->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	if (a->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	au = a->next->n % a->n;
	a->next->n = au;
	*head = a->next;
	free(a);
}
