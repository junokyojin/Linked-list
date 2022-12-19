
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

void moveToFront(struct Node **head_ref)
{
    struct Node *temp1=*head_ref, *temp2=*head_ref,*pre=NULL;
    if(*head_ref){
        while(temp2->next!=NULL){
            pre=temp2;
            temp2= temp2->next;
        }
        if(pre){
            temp2->next=temp1;
            *head_ref=temp2;
            pre->next=NULL;
        }
        
    }
    
}



void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node =
		(struct Node*) malloc(sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}


void printList(struct Node *node)
{
	while(node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}


int main()
{
	struct Node *start = NULL;


	push(&start, 5);
	push(&start, 4);
	push(&start, 3);
	push(&start, 2);
	push(&start, 1);

	printf("\n Linked list before moving last to front\n");
	printList(start);

	moveToFront(&start);

	printf("\n Linked list after removing last to front\n");
	printList(start);

	return 0;
}
