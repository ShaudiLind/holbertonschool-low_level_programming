#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list_t list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		/* Save the current node to a temp pointer so we can access it after moving head */
		current = head;
		/* Move the head pointer to the next node before freeing the current one */
		head = head->next;
		/* Free the string that was strdup'd */
		free(current->str);
		/* Free the node structure itself */
		free(current);
	}
}

