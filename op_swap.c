#include "monty.h"


/**
 * op_swap - swaps the top two elements of the stack
 * 
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation 
 *
 * Return: void
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *next;

	if (var.stack_len < 2)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	next = (*stack)->next;
	next->prev = (*stack)->prev;
	(*stack)->prev->next = next;
	(*stack)->prev = next;
	(*stack)->next = next->next;
	next->next->prev = *stack;
	next->next = *stack;
	*stack = next;
}
