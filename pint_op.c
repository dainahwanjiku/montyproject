#include "monty.h"

/**
 * pint_op - prints the value at the top of the stack
 * @stack: double pointer to the first node
 * @line_number: value of new node
 *
 * Return: void
 */
void pint_op(stack_t **stack, unsigned int line_number)
{
	if(stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n",(*stack)->n);
}
