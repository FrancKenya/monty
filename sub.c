#include "monty.h"

/**
 * handle_sub_opcode - subtracts the top element from the second top element
 * @head: double pointer to stack head
 * @num: line number
 *
 * Return: void
 */
void handle_sub_opcode(stack_t **head, unsigned int num)
{
    int top_value, second_top_value, result;
    stack_t *temp = *head;

    if (temp == NULL || temp->next == NULL)
    {
        fprintf(stderr, "L%d: can't sub, stack too short\n", num);
        exit(EXIT_FAILURE);
    }

    top_value = temp->n;
    second_top_value = temp->next->n;
    result = second_top_value - top_value;

    temp->next->n = result;
    *head = temp->next;
    (*head)->prev = NULL;

    free(temp);
}
