#include "monty.h"

/**
 * instruct_pstr - prints the string starting at the top of the stack
 * @stack: double pointer to the top of the stack
 * @line_number: operation of the line_number
 *
 * Return: void
 */
void instruct_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int ch;

	(void)line_number;

	tmp = *stack;
	while (tmp != NULL)
	{
		ch = tmp->n;
		if (!isascii(ch) || ch == 0)
			break;
		putchar(ch);
		tmp = tmp->next;
		if (tmp == *stack)
			break;
	}
	putchar('\n');
}
