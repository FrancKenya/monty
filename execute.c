#include "monty.h"

/**
* execute - used to call the other functions
* @stack: double pointer to the head of the stack
* @arg: argument passed
* @op: opcode
* @line_number: argument for number of lines
*
*/


void execute(stack_t **stack, char *arg, char *op, unsigned int line_number)
{
if (strcmp(op, "push") == 0)
{
handle_push(stack, arg, line_number);
}
else if (strcmp(op, "pall") == 0)
{
handle_pall(stack);
}
else if (strcmp(op, "pint") == 0)
{
handle_pint(stack, line_number);
}
else if (strcmp(op, "pop") == 0)
{
handle_pop(stack, line_number);
}
else if (strcmp(op, "swap") == 0)
{
handle_swap(stack, line_number);
}
else if (strcmp(op, "add") == 0)
{
handle_add_opcode(stack, line_number);
}
else if (strcmp(op, "nop") == 0)
{
handle_nop(stack, line_number);
}
else
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op);
free_stack(stack);
exit(EXIT_FAILURE);
}
}
