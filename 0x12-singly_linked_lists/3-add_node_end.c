#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: string to be added to the new node
 * 
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last = *head;
char *str_dup;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

str_dup = strdup(str);
if (str_dup == NULL)
{
free(new_node);
return (NULL);
}

new_node->str = str_dup;
new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (last->next)
last = last->next;

last->next = new_node;

return (new_node);
}
