#include <stdio.h>
#include "monty.h"
#include <unistd.h>
#include <string.h>
#define MAX_LINE_LEN 1024
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
char *opcode, *line_c, *arg, *line = NULL;
size_t len = MAX_LINE_LEN;
unsigned int line_number = 1;

if (argc != 2) /* check if argument count is > or < 2 */
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE); }
file = fopen(argv[1], "r"); /* use fd open to read */
if (!file) /* failed open */
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE); }
line = malloc(len);
if (line == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE); }
while (fgets(line, len, file) != NULL) /* read file and store in line buffer */
{
opcode = strtok(line, " \n\t"); /* sepaate command from command argument */
arg = strtok(NULL, " \n\t");
if (opcode != NULL)
{
line_c = malloc(strlen(line) + 1); /* create new line size of original */
if (line_c == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE); }
strcpy(line_c, line); /* copy from line to line_c */
exec(&stack, arg, opcode, line_number); /* call the exec function */
free(line_c); }
line_number++; }
free_stack(&stack);
fclose(file);
free(line);
return (0);
}
