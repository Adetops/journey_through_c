#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodePtr;

/**
 * main - main code
 *
 */
struct node {
	int value;
	nodePtr next;
};

typedef struct node node;

int main(int argc, const char * argv[])
{
	nodePtr first = NULL;

	first = malloc(sizeof(node));

	first->value = 11;
	first->next = malloc(sizeof(node));

	(first->next)->value = 12;
	(first->next)->next = malloc(sizeof(node));

	((first->next)->next)->value = 13;
	((first->next)->next)->next = NULL;

	printf("%d\n", first->value);

	return (0);
}
