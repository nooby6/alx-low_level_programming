#include "lists.h"
#include <stdlib.h>

/**
 * main - entry point for testing
 *
 * Return: Always 0
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node1;
    dlistint_t *node2;
    dlistint_t *node3;

    head = malloc(sizeof(dlistint_t));
    node1 = malloc(sizeof(dlistint_t));
    node2 = malloc(sizeof(dlistint_t));
    node3 = malloc(sizeof(dlistint_t));

    if (head == NULL || node1 == NULL || node2 == NULL || node3 == NULL)
        return (1);

    head->n = 1;
    head->next = node1;
    head->prev = NULL;

    node1->n = 2;
    node1->next = node2;
    node1->prev = head;

    node2->n = 3;
    node2->next = node3;
    node2->prev = node1;

    node3->n = 4;
    node3->next = NULL;
    node3->prev = node2;

    print_dlistint(head);
    printf("Number of elements: %lu\n", dlistint_len(head));

    free(head);
    free(node1);
    free(node2);
    free(node3);

    return (0);
}
