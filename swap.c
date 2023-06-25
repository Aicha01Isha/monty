#include "monty.h"

/**
 * f_swap - adds the top two elements of the stack.
 * @head: parameter
 * @counter: parameter
 * Return: 0 on success
*/

void f_swap(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	au = a->n;
	a->n = a->next->n;
	a->next->n = au;
}
