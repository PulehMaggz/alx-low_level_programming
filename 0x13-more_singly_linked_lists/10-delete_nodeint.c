#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list.
 * @head: Double pointer to the head of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *prev = NULL;
unsigned int i;

if (*head == NULL)  /* Check if the list is empty */
return (-1);

if (index == 0)  /* Special case for deleting the head node */
{
*head = temp->next;  /* Change head to next node */
free(temp);  /* Free old head */
return (1);
}

for (i = 0; temp != NULL && i < index; i++)
{
prev = temp;
temp = temp->next;
}

if (temp == NULL)  /* Check if the node to be deleted was not found */
return (-1);

prev->next = temp->next;  /* Unlink the node from the list */
free(temp);  /* Free memory of the deleted node */

return (1);
}
