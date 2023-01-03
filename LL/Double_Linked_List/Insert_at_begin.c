#include<stdio.h>
#include<stdlib.h>

struct node
{
    char data;
    struct node *next;
    struct node *prev;
};

void main()
{
    struct node* head;
    struct node* new;
    
    head = (struct node*)malloc(sizeof(struct node));
    new = (struct node*)malloc(sizeof(struct node));

    new->data = 'u';
    new->prev = NULL;
    
    if(head==NULL)
    {
        new->next=NULL;
        head = new;
    }
    else
    {
        new->next = head;
        (new->next)->prev= new;
        head = new;
    }
    printf("-----node inserted at the beginning\n-----");
    printf("the data part of the new node is: %c  ", new->data);
   
}