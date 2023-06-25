#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack
 * @head: parameter
 * @counter: parameter
 * Return: 0 on success
*/

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *a;
	(void)counter;

	a = *head;
	while (a)
	{
		if (a->n > 127 || a->n <= 0)
		{
			break;
		}
		printf("%c", a->n);
		a = a->next;
	}
	printf("\n");
}
