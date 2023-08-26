#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * handle_rotl_opcode - rotates the stack to the top
 * @head: double pointer to stack head
 * @num: line number
 *
 * Return: void
 */
void handle_rotl_opcode(stack_t **head,  unsigned int num /*unused*/)
{
    stack_t *temp = *head;
	(void)num;
    if (temp == NULL || temp->next == NULL)
        return;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = *head;
    (*head)->prev = temp;
    *head = (*head)->next;
    (*head)->prev = NULL;
    temp->next->next = NULL;
}
