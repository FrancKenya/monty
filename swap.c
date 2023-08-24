#include "monty.h"

/**
* handle_swap = swaps top 2 elements;
* @head: double pointer to stack head
* @num: line number
*
* Return: void
*/

void handle_swap(stack_t **head, unsigned int num)
{
	int t_value;
	stack_t *temp = *head;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", num);
		exit(EXIT_FAILURE);
	}
	else
	{
		t_value = temp->n;
		temp->n = temp->next->n;
		temp->next->n = t_value;
	}
}
