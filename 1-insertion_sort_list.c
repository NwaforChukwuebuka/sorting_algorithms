#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: Double linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr;

	if (list == NULL || (*list)->next == NULL)
		return;
	ptr = (*list)->next;
	while (ptr)
	{
		while ((ptr->prev) && (ptr->prev->n > ptr->n))
		{
			ptr = swap_node(ptr, list);
			print_list(*list);
		}
		ptr = ptr->next;
	}
}
/**
 *swap_node - swap a node for his previous one
 *@ptr: ptr
 *@list: node list
 *Return: return a pointer to a node which was enter it
 */
listint_t *swap_node(listint_t *ptr, listint_t **list)
{
	listint_t *back = ptr->prev, *current = ptr;

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}
