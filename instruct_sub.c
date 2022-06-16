#include "monty.h"

/**
 * instruct_sub - substracts the top element of the stack 
                  from the second top element of the stack.
 * @stack: pointer to the beginning of the 
 *@line_number: 
 *
 * Return: void
 */
void instruct_sub(stack_t **stack, unsigned int line_number)
{
	int *tmp;
	if(var.stack_len < 2)
	{
		printf("L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->n;
	instruct_pop(stack, line_number);
	(*stack)->n -= tmp;
}
