#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of
 * integers in ascendin order using the Insertion sort algorithm.
 *
 * @list: Pointer to the head of the doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (current != NULL)
{
		listint_t *temp = current->next;
		listint_t *prev = current->prev;

		while (prev != NULL && prev->n > current->n)
{
			prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = prev;

			current->prev = prev->prev;
			current->next = prev;
			prev->prev = current;

			if (current->prev != NULL)
				current->prev->next = current;
			else
				*list = current;

			print_list(*list);

			prev = current->prev;
		}

		current = temp;
	}
}

