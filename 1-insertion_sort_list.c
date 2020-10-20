#include "sort.h"

/**
 * insertion_sort_list - simple sorting algorithm that builds the final sorted
 * array one item at a time.
 * @list: address of pointer to aux node
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *key = NULL;
	listint_t *aux = NULL;

	if (!(list) || !(*list) || !(*list)->next)
		return;
	key = (*list)->next;
	while (key)
	{
		aux = key->prev;
		while (aux && aux->n > key->n)
		{
			aux->next = key->next;
			if (key->next)
				key->next->prev = aux;
			key->prev = aux->prev;
			if (aux->prev)
				aux->prev->next = key;
			else
				*list = key;
			key->next = aux;
			aux->prev = key;
			aux = key->prev;
			print_list(*list);
		}
		key = key->next;
	}
}
