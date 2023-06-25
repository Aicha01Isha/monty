#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: parameter
 * @counter: parameter
 * Return: 0 on success
*/

void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	au = a->next->n * a->n;
	a->next->n = au;
	*head = a->next;
	free(a);
}
