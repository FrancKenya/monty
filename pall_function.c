#include "monty.h"

/**
* handle_pall - handles the opcode pall
* @head: double pointer to the head of the linked list
* @num: unused attribute
* Return: void
*/

void handle_pall(stack_t **head, unsigned int __attribute__((unused)) num)
{
	stack_t *temp; /* temporary pointer */
	int i;

	temp = *head; /* initialized to transverse the list */

	if (temp == NULL) /* check if node is empty */
	{
		return;
	}
	while (temp != NULL) /* if not empty */
	{
		i = temp->n;
		printf("%d\n", i); /* print data */
		temp = temp->next; /* update pointer */
	}
}
