#include "monty.h"

/**
* handle_add_opcode - adds value of top two stack elements
* @head: double pointer to stack head
* @num: line number
*
* Return: void
*/

void handle_add_opcode(stack_t **head, unsigned int num)
{
	int i, j, results;
	stack_t *temp = *head;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", num);
		exit(EXIT_FAILURE);
	}
	i = temp->n;
	j = temp->next->n;
	results = j + i;

	temp->next->n = results;
	*head = temp->next;
	(*head)->prev = NULL;

	free(temp);
}
