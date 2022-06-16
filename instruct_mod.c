#include "monty.h"

/**
 * instruct_mod - computes the rest of the division of the second
 *                top element of the stack by the
 *                top element of the stack
 *@stack: double pointer to the operation
 *@line_number: 
 *
 * Return: void
 */
void instruct_mod(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if(var.stack_len <2)
	{
		printf("L%u: \n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->n;
	if (tmp ==0)
	{
		printf("L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	instruct_pop(stack, line_number);
	(*stack)->n %= n;
}
