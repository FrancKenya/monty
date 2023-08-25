# ALX  C - Stacks, Queues - LIFO, FIFO
- The Monty language project

- Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python).
- It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.



# More Info

## Data structures


- Please use the following data structures for this project. Don’t forget to include them in your header file.

```bash
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
```
    
```bash
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
```
    

# Compilation & Output

Your code will be compiled this way:


```bash
  $ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```
    

Done by: Victor Makori and Francis Waihiga
