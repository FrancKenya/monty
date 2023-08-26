#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * handle_mod_opcode - computes the remainder of division of top element by the second top element
 * @head: double pointer to stack head
 * @num: line number
 *
 * Return: void
 */
void handle_mod_opcode(stack_t **head, unsigned int num)
{
    int divisor, dividend, result;
    stack_t *temp = *head;

    if (temp == NULL || temp->next == NULL)
    {
        fprintf(stderr, "L%d: can't mod, stack too short\n", num);
        exit(EXIT_FAILURE);
    }

    divisor = temp->n; /* Top element*/
    dividend = temp->next->n; /* Second top element*/

    if (divisor == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", num);
        exit(EXIT_FAILURE);
    }

    result = dividend % divisor;

    temp->next->n = result;
    *head = temp->next;
    (*head)->prev = NULL;

    free(temp);
}
