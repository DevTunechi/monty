#include "monty.h"

/**
 * add_dnodeint_end - add node at end of doubly link list
 * @head: the first position of linked list
 * @n: the data to store
 * Olatunji Oluwadare and Goodnews Akpan
 * Return: doubly linked list
 */

stack_t *add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *temp, *aux;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(stack_t));
	if (!temp)
	{
		dprintf(2, "Error: malloc failed\n");
		free_vglo();
		exit(EXIT_FAILURE);
	}
	temp->n = n;

	if (*head == NULL)
	{
		temp->next = *head;
		temp->prev = NULL;
		*head = temp;
		return (*head);
	}
	aux = *head;
	while (aux->next)
		aux = aux->next;
	temp->next = aux->next;
	temp->prev = aux;
	aux->next = temp;
	return (aux->next);
}

/**
 * add_dnodeint - add nod to begining of d doubly link list
 * @head: first position of linked list
 * @n: data to store
 * Olatnji Oluwadare and Goodnews Akpan
 * Return: a doubly linked list
 */

stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(stack_t));
	if (!temp)
	{
		dprintf(2, "Error: malloc failed\n");
		free_vglo();
		exit(EXIT_FAILURE);
	}
	temp->n = n;

	if (*head == NULL)
	{
		temp->next = *head;
		temp->prev = NULL;
		*head = temp;
		return (*head);
	}
	(*head)->prev = temp;
	temp->next = (*head);
	temp->prev = NULL;
	*head = temp;
	return (*head);
}

/**
 * free_dlistint - frees d doubly linkd list
 * Olatunji Oluwadare and Goodnews Akpan
 * @head: head of list
 * Return: non
 */

void free_dlistint(stack_t *head)
{
	stack_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
