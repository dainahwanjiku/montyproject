#include "monty.h"

/**
 * op_pchar -print char from top of stack
 * @stack: double pointer to top of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void op_pchar(stack_t **stack, unsigned int line_number)
{
	int ch;

	if(*stack == NULL)
	{
		printf("L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	ch = (*stack)->n;
	if (!isascii(ch))
	{
		printf("L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
        }
	printf("%c\n", ch);
}
