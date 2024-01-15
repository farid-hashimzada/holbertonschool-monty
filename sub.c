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
	int res = 0;
	stack_t *tmp = *stack;

	if (!tmp || !tmp->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_count);
		exit(EXIT_FAILURE);
	}

	res = tmp->next->n - tmp->n;
	pop(stack, line_count);
	(*stack)->n = res;
}
