#include "monty.h"

/**
 * _queue - sets format of data to queue(FIFO)
 * Olatunji Oluwadare and Goodnews Akpan
 * @doubly: head of the linked list
 * @cline: line num
 * Return: no return
 */

void _queue(stack_t **doubly, unsigned int cline)
{
(void)doubly;
(void)cline;

vglo.lifo = 0;
}

/**
 * _stack - sets format of data to stack(LIFO)
 * Olatunji Oluwadare and Goodnews Akpan
 * @doubly: head of the linked list
 * @cline: line num
 * Return: non
 */

void _stack(stack_t **doubly, unsigned int cline)
{
(void)doubly;
(void)cline;

vglo.lifo = 1;
}

/**
 * _add - adds top two elements of the stack
 * Olatunji Oluwadare and Goodnews Akpan
 * @doubly: head of linked list
 * @cline: line num
 * Return: non
 */

void _add(stack_t **doubly, unsigned int cline)
{
int m = 0;
stack_t *aux = NULL;

aux = *doubly;

for (; aux != NULL; aux = aux->next, m++)
		;
if (m < 2)
{
dprintf(2, "L%u: can't add, stack too short\n", cline);
free_vglo();
exit(EXIT_FAILURE);
}

aux = (*doubly)->next;
aux->n += (*doubly)->n;
_pop(doubly, cline);
}

/**
 * _nop - does nothing
 * Olatunji Oluwadare and Goodnews Akpan
 * @doubly: head of the linked list
 * @cline: line num
 * Return: no return
 */

void _nop(stack_t **doubly, unsigned int cline)
{
(void)doubly;
(void)cline;
}

/**
 * _sub - subtracts top element to second top element of the stack
 * Olatunji Oluwadare and Goodnews Akpan
 * @doubly: head of linked list
 * @cline: line num
 * Return: non
 */

void _sub(stack_t **doubly, unsigned int cline)
{
int m = 0;
stack_t *aux = NULL;

aux = *doubly;

for (; aux != NULL; aux = aux->next, m++)
		;

if (m < 2)
{
dprintf(2, "L%u: can't sub, stack too short\n", cline);
free_vglo();
exit(EXIT_FAILURE);
}

aux = (*doubly)->next;
aux->n -= (*doubly)->n;
_pop(doubly, cline);
}
