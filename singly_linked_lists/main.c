#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - check the print_list function
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}

	new->str = malloc(6);
	if (new->str == NULL)
	{
		free(new);
		printf("Error\n");
		return (1);
	}
	strcpy(new->str, "Hello");
	new->len = 5;
	new->next = head;
	head = new;

	n = print_list(head);
	printf("-> %lu elements\n", (unsigned long)n);

	printf("\n");

	free(new->str);
	new->str = NULL;

	n = print_list(head);
	printf("-> %lu elements\n", (unsigned long)n);

	free(new);
	return (0);
}
