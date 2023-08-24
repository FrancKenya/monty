#include "monty.h"
#include <stdio.h>

/**
* main - Main function
* @argc: number of arguments
* @argv: argument vector
*
* Return: integer 0 success
*/

int main(int argc, char *argv[])
{
FILE *file;
stack_t *stack = NULL;
char *op, *arg, *line = NULL;
size_t len = 0;
unsigned int line_number = 1;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
if (!file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (getline(&line, &len, file) != -1)
{
op = strtok(line, " \t\n");
arg = strtok(NULL, " \t\n");
if (op != NULL)
{
execute(&stack, arg, op, line_number)
}
line_number++;
}
free_stack(stack);
fclose(file);
free(line);
return (EXIT_SUCCESS);
}
