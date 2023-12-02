#include "lists.h"
/**
 * free_list - function that frees a list
 * @head: point to the beginning
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
