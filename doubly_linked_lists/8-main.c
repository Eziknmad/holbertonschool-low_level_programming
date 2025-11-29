#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_and_print - delete nodes and print separators
 * @head: pointer to pointer to head of list
 * @times: number of times to delete
 */
void delete_and_print(dlistint_t **head, int times)
{
	int i;

	for (i = 0; i < times; i++)
	{
		delete_dnodeint_at_index(head, 0);
		printf("-----------------\n");
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	delete_and_print(&head, 14);
	print_dlistint(head);
	return (0);
}
