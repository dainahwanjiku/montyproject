#include "monty.c"

/**
 * instruct_mul - multiplies second top node from top node
 * @stack: double pointer to top of stack
 * @line_number: value of node
 *
 * Return: void
 */
void instruct_mul(stack_t **stack unsigned int line_number)
{
	int *tmp;

	if(var.stack_len < 2)
	{
		printf("L%u: can't mul, stack too short", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->n;
	instruct_pop(stack, line_number);
	(*stack)->n *= tmp;
}
