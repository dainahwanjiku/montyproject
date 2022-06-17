#include "monty.h"

/**
 * instruct_queue - sets the format of the data to a queue (FIFO)
 * @stack: double pointer to the beginning of the stack
 * @line_number: script line number
 *
 * Return: void
 */
void instruct_queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	var.queue = QUEUE;
}
