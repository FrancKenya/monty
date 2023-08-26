#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * handle_mul_opcode - multiplies the second top element with the top element
 * @head: double pointer to stack head
 * @num: line number
 *
 * Return: void
 */
void handle_mul_opcode(stack_t **head, unsigned int num)
{
    int factor1, factor2, result;
    stack_t *temp = *head;

    if (temp == NULL || temp->next == NULL)
    {
        fprintf(stderr, "L%d: can't mul, stack too short\n", num);
        exit(EXIT_FAILURE);
    }

    factor1 = temp->n; /* Top element*/
    factor2 = temp->next->n; /* Second top element*/

    result = factor2 * factor1;

    temp->next->n = result;
    *head = temp->next;
    (*head)->prev = NULL;

    free(temp);
}
