#include "monty.h"

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

void mul_op(stack_t **stack, unsigned int line_number)

instruction_t opcodes[] = {
	{"push", push_op},
	{"pall", pall_op},
	{"mul", mul_op},
	{NULL, NULL}
};
/**
 * mul_op - Multiply the second top element of the stack with the top element
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number being processed
 */
void mul_op(stack_t **stack, unsigned int line_number)
{
	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n *= (*stack)->n;
	pop_op(stack, line_number); /* Remove the top element */
}

