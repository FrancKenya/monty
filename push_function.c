#include "monty.h"
/**
* create_node - creates and adds a new node to a list
* @head: double pointer to the head of the list
* @n: To be added to the node created
*
* Return: Void
*/

void create_node(stack_t **head, unsigned int n)
{
stack_t *new, *temp = *head;

new = malloc(sizeof(stack_t));
if (new == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
if (new != NULL && temp != NULL)
{
new->n = n;
temp->prev = new;
}
new->next = *head;
new->prev = NULL;
*head = new;
}

/**
* handle_push - pushes element to stack
* @head: Double pointer to head of list
* @num: number in file
* @args: argument pushed
*
* Return: Void
*/

void handle_push(stack_t **head, char *args, unsigned int num)
{
int i;

if (!args)
{
fprintf(stderr, "L%d: usage: push integer\n", num);
exit(EXIT_FAILURE);
}
i = atoi(args);
if (i <= 0 && args[0] != '0')
{
fprintf(stderr, "L%d: usage: push integer\n", num);
exit(EXIT_FAILURE);
}
create_node(head, i);
}
