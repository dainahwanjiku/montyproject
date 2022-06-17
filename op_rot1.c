#include "monty.h"

/**
 * instruction_rotl - all elements rotate left, top element becomes last
 * @stack: double pointer to top of stack
 * @line_number: what line in the monty bytecode file are we at?
 */

void instruction_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack, *new_top;

	UNUSED(line_number);
	if (*stack == NULL || (*stack)->next == NULL)
		return;
	new_top = (*stack)->next;
	new_top->prev = NULL;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = tmp;
	(*stack) = new_top;
}
