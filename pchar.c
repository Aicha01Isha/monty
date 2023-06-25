#include "monty.h"

/**
 * f_pchar - prints the char at the top of the stack,
 * followed parameter
 * @head: parameter
 * @counter: parameter
 * Return: 0 on success
*/

void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *a;

	a = *head;
	if (!a)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (a->n > 127 || a->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", a->n);
}
