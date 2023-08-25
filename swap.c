#include "monty.h"

/**
* handle_swap_command - swaps top 2 elements;
* @head: double pointer to stack head
* @num: line number
*
* Return: void
*/

void handle_swap_command(stack_t **head, unsigned int num)
{
	int t_value; /* temporary variable to be used in the swap */
	stack_t *temp = *head;

	if (temp == NULL || temp->next == NULL) /* not two elements */
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", num);
		exit(EXIT_FAILURE);
	}
	else
	{
		t_value = temp->n; /* holds the value of the first node */
		temp->n = temp->next->n; /*move second n to first node */
		temp->next->n = t_value; /* move now first n to second node */
	}
}
