#include "monty.h"


/**
 * instruct_add - adds the top two elements of the stack.
 * @stack: double pointer to top of stack
 * @line_number: value of node
 *
 * Return: 0
 */
void instruct_add(stack_t stack**, unsigned int line_number)
{
	int tmp;

	if(var.stack_len < 2)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->n;
	instruct_pop(stack, line_number);
	(*stack)->n += tmp;
}
