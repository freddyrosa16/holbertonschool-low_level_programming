#include "lists.h"
/**
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *adding;

	adding = malloc(sizeof(list_t));

	if (adding == NULL || str == NULL)
		return (NULL);

	adding->str = strdup(str);
	adding->len = strlen(str);
	adding->next = *head;
	*head = adding;

	return (adding);
}
