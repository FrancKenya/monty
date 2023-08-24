#include <stdio.h>
#include "monty.h"
#include <unistd.h>
#include <string.h>

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
char *opcode, *arg, *line = NULL;
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
while (fgets(line, len, file) != NULL)
{
opcode = strtok(line, " \t\n");
arg = strtok(NULL, " \t\n");
if (opcode != NULL)
{
exec(&stack, arg, opcode, line_number);
}
line_number++;
}
free_stack(&stack);
fclose(file);
free(line);
return (0);
}
