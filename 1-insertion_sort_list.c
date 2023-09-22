#include "sort.h"
/**
 * insertion_sort_list - insertion sort function
 * @list: double linked list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *insertion_point; 
	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;
	

	while (current != NULL)
	{
		insertion_point = current->prev;
		temp = current;
		while (insertion_point != NULL && insertion_point->n > temp->n)
		{
			if (temp->next != NULL)
				temp->next->prev = insertion_point;
			insertion_point->next = temp->next;
			
			temp->prev = insertion_point->prev;
			temp->next = insertion_point;
			
			if (insertion_point->prev != NULL)
				insertion_point->prev->next = temp;
			else
				*list = temp;
			insertion_point->prev = temp;
			insertion_point = temp->prev;
			print_list(*list);
		}
		current = current->next;
	}
	
}
