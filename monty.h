#ifndef MONTY_H
#define MONTY_H

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void handle_swap_command(stack_t **head, unsigned int num);
void handle_pall(stack_t **head, unsigned int num);
void create_node(stack_t **head, unsigned int n);
void handle_push(stack_t **head, char *args, unsigned int num);
void handle_pint(stack_t **head, unsigned int num);
void handle_pop(stack_t **head, unsigned int num);
void handle_nop(stack_t **head, unsigned int __attribute__((unused)) num);
void handle_add_opcode(stack_t **head, unsigned int num);
void execute(stack_t **stack, char *arg, char *op, unsigned int line_number);
void free_stack(stack_t *head);
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>

#endif
