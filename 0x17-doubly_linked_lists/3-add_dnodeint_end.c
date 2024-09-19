#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Double pointer to the head of the list
 * @n: The data to add in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *temp = *head;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)  /* If the list is empty */
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

while (temp->next)  /* Traverse to the end of the list */
temp = temp->next;

temp->next = new_node;  /* Link the last node to the new node */
new_node->prev = temp;   /* Link the new node back to the last node */

return (new_node);
}
