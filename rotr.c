#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * handle_rotr_opcode - rotates the stack to the bottom
 * @head: double pointer to stack head
 * @num: line number (unused)
 *
 * Return: void
 */
void handle_rotr_opcode(stack_t **head, unsigned int num)
{
	stack_t *last = *head;
    (void)num;
    if (*head == NULL || (*head)->next == NULL)
        return;


    /* Find the last element of the stack*/
    while (last->next != NULL)
        last = last->next;

    /* Update pointers to rotate the stack*/
    last->prev->next = NULL;
    last->prev = NULL;
    last->next = *head;
    (*head)->prev = last;
    *head = last;
}
