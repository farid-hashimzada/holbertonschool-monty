#include "monty.h"

/**
 * _sub -  substracts the top element of stack from the second
 * 	   top element of the stack
 * @stack: stack given by main
 * @line_count: line count
 *
 * Return: void
 */
void _sub(stack_t **stack, unsigned int line_count)
{
	int res;

	if (!*stack || !stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_count);
		exit(EXIT_FAILURE);
		return;
	}

	res = ((*stack)->next->n) - ((*stack)->n);
	pop(stack, line_count);
	(*stack)->n = res;
}
