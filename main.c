#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - monty code interpreter
 * @argc: parameter
 * @argv: parameter
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	char *cont;
	FILE *f;
	size_t s = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	bus.file = f;
	if (!f)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		cont = NULL;
		read_line = getline(&cont, &s, f);
		bus.content = cont;
		count++;
		if (read_line > 0)
		{
			execute(cont, &stack, count, f);
		}
		free(cont);
	}
	free_stack(stack);
	fclose(f);
	return (0);
}
