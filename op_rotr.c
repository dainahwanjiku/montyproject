include "monty.h"

/**
 * instruction_rotr - all elements rotate right, bottom element becomes first
 * @stack: double pointer to top of stack
 * @line_number: what line in the monty bytecode file are we at?
 **/
void op_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	UNUSED(line_number);
	if (*stack == NULL || (*stack)->next == NULL)
		return;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *stack;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	(*stack)->prev = tmp;
	(*stack) = tmp;
}
