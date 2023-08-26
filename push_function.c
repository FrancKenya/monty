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

new = malloc(sizeof(stack_t)); /* allocate memory */
if (new == NULL) /* handle malloc failure */
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
new->n = n; /* assign data to the new node */
new->next = *head; /* position it at the top */
new->prev = NULL; /* update the prev pointer to NULL */
if (temp != NULL)
{
temp->prev = new;
}
*head = new; /* update head pointer to point to new node */
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

if (!args) /* handle 0 argument input */
{
fprintf(stderr, "L%d: usage: push integer\n", num);
exit(EXIT_FAILURE);
}
for (i = 0; args[i] != '\0'; i++)
{
if (i == 0 && (args[i] == '-' || args[i] == '+'))
continue;

if (args[i] < '0' || args[i] > '9')
{
fprintf(stderr, "L%d: usage: push integer\n", num);
exit(EXIT_FAILURE);
}
}
 i = atoi(args); /* convert to integer argument put */
create_node(head, i); /* call the create node function if no errors */
}
