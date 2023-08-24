#include "monty.h"

/**
* free_stack - frees a stack
* @head: pointer to the head of the stack
*
* Return: void
*/

void free_stack(stack_t *head)
{
stack_t *temp = head;

while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
