#include "monty.h"
#include <string.h>
/**
* exec - used to call the other functions
* @stack: double pointer to the head of the stack
* @arg: argument passed
* @opcode: opcode
* @line_number: argument for number of lines
*
*/


void exec(stack_t **stack, char *arg, char *opcode, unsigned int line_number)
{
if (strcmp(opcode, "push") == 0)
{
handle_push(stack, arg, line_number);
}
else if (strcmp(opcode, "pall") == 0)
{
handle_pall(stack, line_number);
}
else if (strcmp(opcode, "pint") == 0)
{
handle_pint(stack, line_number);
}
else if (strcmp(opcode, "pop") == 0)
{
handle_pop(stack, line_number);
}
else if (strcmp(opcode, "swap") == 0)
{
handle_swap_command(stack, line_number);
}
else if (strcmp(opcode, "add") == 0)
{
handle_add_opcode(stack, line_number);
}
else if (strcmp(opcode, "nop") == 0)
{
handle_nop();
}
else if (strcmp(opcode, "sub") == 0)
{
	handle_sub_opcode(stack, line_number);
}
else if (strcmp(opcode, "div") == 0)
{
	handle_div_opcode(stack, line_number);
}
else
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
free_stack(stack);
exit(EXIT_FAILURE);
}
}
