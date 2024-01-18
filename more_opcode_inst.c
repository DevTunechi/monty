#include "monty.h"

/**
 * _div - divides second element by top element of the stack
 * Olatunji and Goodnews
 * @doubly: head of linked lis
 * @cline: line num
 * Return: non
 */

void _div(stack_t **doubly, unsigned int cline)
{
int m = 0;
stack_t *aux = NULL;

aux = *doubly;

for (; aux != NULL; aux = aux->next, m++)
;

if (m < 2)
{
dprintf(2, "L%u: can't div, stack too short\n", cline);
free_vglo();
exit(EXIT_FAILURE);
}

if ((*doubly)->n == 0)
{
dprintf(2, "L%u: division by zero\n", cline);
free_vglo();
exit(EXIT_FAILURE);
}

aux = (*doubly)->next;
aux->n /= (*doubly)->n;
_pop(doubly, cline);
}

/**
 * _mul - mul top element to second top element of the stack
 * Olatunji and Goodnews
 * @doubly: head of linked list
 * @cline: line num
 * Return: non
 */

void _mul(stack_t **doubly, unsigned int cline)
{
int m = 0;
stack_t *aux = NULL;

aux = *doubly;

for (; aux != NULL; aux = aux->next, m++)
;

if (m < 2)
{
dprintf(2, "L%u: can't mul, stack too short\n", cline);
free_vglo();
exit(EXIT_FAILURE);
}

aux = (*doubly)->next;
aux->n *= (*doubly)->n;
_pop(doubly, cline);
}

/**
 * _mod - computes division of second element by top element of stack
 * Olatunji and Goodnews
 * @doubly: head oflinked list
 * @cline: line num
 * Return: non
 */

void _mod(stack_t **doubly, unsigned int cline)
{
int m = 0;
stack_t *aux = NULL;

aux = *doubly;

for (; aux != NULL; aux = aux->next, m++)
;

if (m < 2)
{
dprintf(2, "L%u: can't mod, stack too short\n", cline);
free_vglo();
exit(EXIT_FAILURE);
}

if ((*doubly)->n == 0)
{
dprintf(2, "L%u: division by zero\n", cline);
free_vglo();
exit(EXIT_FAILURE);
}

aux = (*doubly)->next;
aux->n %= (*doubly)->n;
_pop(doubly, cline);
}

/**
 * _pchar - print char value of first element
 * Olatunji and Goodnews
 * @doubly: head of the linked list
 * @cline: line num
 * Return: non
 */

void _pchar(stack_t **doubly, unsigned int cline)
{
if (doubly == NULL || *doubly == NULL)
{
dprintf(2, "L%u: can't pchar, stack empty\n", cline);
free_vglo();
exit(EXIT_FAILURE);
}
if ((*doubly)->n < 0 || (*doubly)->n >= 128)
{
dprintf(2, "L%u: can't pchar, value out of range\n", cline);
free_vglo();
exit(EXIT_FAILURE);
}
printf("%c\n", (*doubly)->n);
}

/**
 * _pstr - prints string of the stack
 * Olatunji and Goodnews
 * @doubly: head of linked list
 * @cline: line num
 * Return: non
 */

void _pstr(stack_t **doubly, unsigned int cline)
{
stack_t *aux;
(void)cline;

aux = *doubly;

while (aux && aux->n > 0 && aux->n < 128)
{
printf("%c", aux->n);
aux = aux->next;
}

printf("\n");
}
