#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void main()
{
    struct node* head;
    struct node* new;

    head = (struct node*)malloc(sizeof(struct node));
    new  = (struct node*)malloc(sizeof(struct node));

    new->data  = 10;
    if(head == NULL)
    {
        new->next = NULL;
        head = new; 
    }
    else
    {
        new->next = head;
        head = new;

    }
    printf("----New node inserted at the beginning----\n");
    printf("Data stored in this new node is- %d",new->data);

}