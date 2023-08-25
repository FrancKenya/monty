#include "monty.h"

/**
* free_stack - frees a stack
* @head: pointer to the head of the stack
*
* Return: void
*/

void free_stack(stack_t **head)
{
stack_t *tmp; /* temporary pointer */

while (*head != NULL) /* while not empty */
{
tmp = (*head)->next; /* assign address of next node */
free(*head); /* free the first node */
*head = tmp; /* point the head to the top node */
}
}
