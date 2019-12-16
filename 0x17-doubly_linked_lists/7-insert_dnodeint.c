#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: head of the node
 * @idx: index where to place node
 * @n: data for the node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *tmpcount = *h;
	dlistint_t *new_node;
	unsigned int cont = 0;

	if (*h == NULL)
		return (NULL);
	while (tmpcount != NULL)
		tmpcount = tmpcount->next, cont++;
	if (idx > cont)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL, new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	cont = 0;
	while (cont <= idx)
	{
		if (cont == idx)
		{
			new_node->prev = tmp->prev;
			new_node->next = tmp;
			tmp->prev->next = new_node;
			tmp->prev = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		cont++;
	}
	return (NULL);
}
