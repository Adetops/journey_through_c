#include <stdio.h>
#include <stdlib.h>

typedef struct node *Heritage;

struct node {
	int age;
	Heritage address;
};

int main(void)
{
	Heritage Head = NULL;

	Head = malloc(sizeof(Heritage));
	Head->age = 10;
	Head->address = malloc(sizeof(Heritage));

	Head->address->age = 15;
	Head->address->address = NULL;

	printf("%d\n", Head->age);
	printf("%d\n", Head->address->age);
	
	return (0);
}
