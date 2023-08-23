#include "monty.h"

/**
* handle_pall - handles the opcode pall
* @head: double pointer to the head of the linked list
* @num: unused attribute
* Return: void
*/

void handle_pall(stack_t **head, unsigned int num)
{
	stack_t *temp; /* temporary pointer */
	int i;
	void (num);

	temp = *head; /* initialized to transverse the list */

	if (temp == NULL)
	{
		return;
	}
	while (temp != NULL)
	{
		i = temp->n;
		printf("%d\n", i);
		temp = temp->next;
	}
}
