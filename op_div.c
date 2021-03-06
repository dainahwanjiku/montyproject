#include "monty.h"

/**
 * op_div - divides the second top element of the stack
 *                by the top element of the stack
 * @stack: double pointer to the beginning of the 
 * @line_number: 
 *
 * Return: void
 */
void op_div(stack_t **stack, unsigned int line_number)
{
	int *n;

	if(var.stack_len < 2)
	{
		printf("L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	if (n == 0)
	{
		printf("L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE)
	}
	op_pop(stack, line_number);
	(*stack)->n /= n;
}
