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
    struct node* a;
    struct node* b;
    struct node* c;
    struct node* new;
    struct node* ptr;
    struct node* ptr1;

    head = (struct node*)malloc(sizeof(struct node));
    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));
    new = (struct node*)malloc(sizeof(struct node));

    new->data = 'g';
    new->next = NULL;

    head->next = a;
    a->data = 'd';
    a->next = b;
    a->prev = NULL;

    b->data = 'f';
    b->next = c;
    b->prev = a;

    c->data = 'v';
    c->next = NULL;
    c->prev = b;
    
    if(head == NULL)
    {
        head = new;
        new->prev = NULL;
    }
    else
    {
        ptr = head;
        while(ptr->next!=NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr->next = new;
        new->prev = ptr1;                    //ptr1 is storing the address of the previous node.
    }
    printf("-----node inserted at the end\n-----");
    printf("the data part of the new node is: %c  ", new->data);
    
}