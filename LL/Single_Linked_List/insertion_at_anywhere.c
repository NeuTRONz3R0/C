#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void main()
{
    struct node *head;
    struct node *a;
    struct node *b;
    struct node *c;
    struct node *d;
    struct node *ptr;
    struct node *new;

    int key = 40;

    head = (struct node*)malloc(sizeof(struct node));
    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));
    d = (struct node*)malloc(sizeof(struct node));
    new = (struct node*)malloc(sizeof(struct node));

    new->data = 10;
    head->next = a;

    a->data = 20;
    a->next = b;
    
    b->data = 30;
    b->next = c;

    c->data = 40;
    c->next = d;

    d->data = 50;
    d->next = NULL;
   
    ptr = head;
    while(ptr->next != NULL)
    {
        if(ptr->data == key)
        {
            break;
        }
        else
        {
            ptr = ptr->next;
            break;
        }
    }
    new->next = ptr->next;
    ptr->next = new;

    printf("-----Insert anywhere-----\n");
    printf("new node inserted after key value %d\n", key);
    printf("the info part of the new node is: %d  ", new->data);

}