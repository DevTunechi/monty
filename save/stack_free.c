#include "monty.h"

/**
* free_stack - frees doubly linked list
* Olatunji and Goodnews
* @head: head of stack
*/

void free_stack(stack_t *head)
{
stack_t *aux;

aux = head;
while (head)
{
aux = head->next;
free(head);
head = aux;
}
}
