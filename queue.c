#include "monty.h"

/**
 * f_queue - function that prints top
 * Olatunji and Goodnews
 * @head: stack head
 * @counter: line num
 * Return: nothing
*/

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - function to add node to tail stack
 * @n: new_value
 * Olatunji and Goodnews
 * @head: head of the stack
 * Return: nothing
*/

void addqueue(stack_t **head, int n)
{
stack_t *new_node, *aux;

aux = *head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
}
new_node->n = n;
new_node->next = NULL;
if (aux)
{
while (aux->next)

aux = aux->next;
}

if (!aux)
{
*head = new_node;
new_node->prev = NULL;
}

else

{
aux->next = new_node;
new_node->prev = aux;
}

}
