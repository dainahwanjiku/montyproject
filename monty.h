#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <limits.h>
#include <ctype.h>

#define UNUSED(x) (void)(x)
#define TRUE 1
#define FALSE 0
#define DELIMS "\n \t\r"
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct glob_s - globally useful variables, all rolled into one
 * @top: double pointer to top of stack
 * @ops: double pointer to an instruction struct
**/
typedef struct glob_s
{
	stack_t **top;
	instruction_t **ops;
} glob_t;

#define STACK 0
#define QUEUE 1

extern glob_t glob;
extern var_t var;

/* main2.c */
void stack_init(stack_t **head);
void free_all(void);

/* linepointer.c*/
void free_lineptr(int status, void *arg);


/* helper_file.c */
int process_file(char *filename, stack_t **stack);

/* helper_file2.c */
void delegate_op(stack_t **stack, char *op, unsigned int line_number);


/* prototypes*/
void instruct_push(stack_t **stack, unsigned int line_number);
void instruct_pop(stack_t **stack, unsigned int line_number);
void instruct_pint(stack_t **stack, unsigned int line_number);
void instruct_pall(stack_t **stack, unsigned int line_number);
void instruct_swap(stack_t **stack, unsigned int line_number);
void instruct_add(stack_t **stack, unsigned int line_number);
void instruct_nop(stack_t **stack, unsigned int line_number);
void instruct_sub(stack_t **stack, unsigned int line_number);
void instruct_div(stack_t **stack, unsigned int line_number);
void instruct_mul(stack_t **stack, unsigned int line_number);
void instruct_mod(stack_t **stack, unsigned int line_number);
void instruct_pchar(stack_t **stack, unsigned int line_number);
void instruct_pstr(stack_t **stack, unsigned int line_number);
void instruct_rotl(stack_t **stack, unsigned int line_number);
void instruct_rotr(stack_t **stack, unsigned int line_number);

/* strtol.c */
int is_leading_digit(char ascii_char);
int _strtol(char *num_string, unsigned int line_number);

#endif
