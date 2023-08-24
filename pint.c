#include "monty.h"
/**
* handle_pint - prints top of the stack value and a new line
* @head: double pointer to the head of the list
* @num: number of line
*
*/

void handle_pint(stack_t **head, unsigned int num)
{
	stack_t *temp = *head;

	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", num);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", temp->n);
	}
}
