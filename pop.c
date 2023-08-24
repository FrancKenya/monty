#include "monty.h"

/**
* handle_pop - removes the first element
* @head: double pointer to the stack head
* @num: Line number
*
* Return: void
*/

void handle_pop(stack_t **head, unsigned int num)
{
	stack_t *temp = *head;

	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", num);
		exit(EXIT_FAILURE);
	}
	else
	{
		*head = temp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	free(temp);
}
