#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node* head;
    struct node* a ;
    struct node* b;
    struct node* c ;
    struct node* d;
    struct node* new;
    struct node* ptr;
    
    head = (struct node*)malloc(sizeof(struct node));
    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));
    d = (struct node*)malloc(sizeof(struct node));

    new->data = 50;
    new->next = NULL;

    
    head->next = a;

    a->data = 10;
    a->next = b;
    
    b->data = 20;
    b->next = c;

    c->data = 30;
    c->next = d;

    d->data = 40;
    d->next = NULL;
    if(head == NULL)
    {
        head = new;
    }
    else
    {
        ptr = head;
        while(ptr->next!=NULL)
        {
            ptr = ptr->next;
        }
        ptr->next=new;
    }
    printf("-----node inserted at the end\n-----");
    printf("the data part of the new node is: %d  ", new->data);
    
}