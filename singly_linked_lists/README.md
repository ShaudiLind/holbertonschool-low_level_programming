This proyect focuses on implementation and usage of Singly Linked Lists in C.
A singly linked list is a data structure consisting of a sequence of nodes
, where each node contains a value and a pointer to the next node in the sequence.
This project explores how to create, manipulate, and traverse these lists effectively.

This proyect uses the following structure:
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

Compilation
All files are compiled on Ubuntu 20.04 LTS using 
gcc with the following flags: -Wall -Werror -Wextra -pedantic -std=gnu89

Milenys/Shaudi_Lind

