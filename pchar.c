#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * handle_pchar_opcode - prints the character at the top of the stack
 * @head: double pointer to stack head
 * @num: line number
 *
 * Return: void
 */
void handle_pchar_opcode(stack_t **head, unsigned int num)
{
    int ascii_value;
    stack_t *temp = *head;

    if (temp == NULL)
    {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", num);
        exit(EXIT_FAILURE);
    }

    ascii_value = temp->n;

    if (ascii_value < 0 || ascii_value >= 128)
    {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", num);
        exit(EXIT_FAILURE);
    }
	if (ascii_value >= 0)
	{	
    putchar(ascii_value);
    putchar('\n');
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", num);
		exit(EXIT_FAILURE);
	}

}
