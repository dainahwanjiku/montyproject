#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: double pointer to the first node
 * @line_number: value of new node
 *
 * Return: void
 */
void instruct_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if(stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}

