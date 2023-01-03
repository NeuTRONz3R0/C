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

    char key = 'b';

    head = (struct node*)malloc(sizeof(struct node));
    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));
    new = (struct node*)malloc(sizeof(struct node));

    new->data = 'u';
    new->next = NULL;

    head->next = a;
    a->data = 'd';
    a->next = b;
    a->prev = NULL;

    b->data = 'e';
    b->next = c;
    b->prev = a;

    c->data = 'l';
    c->next = NULL;
    c->prev = b;
    
    ptr = head;
    while(ptr->next != NULL)
    { 
        ptr1 = ptr;
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
    new->prev = ptr1;
    printf("-----Node inserted anywhere-----\n");
    printf("new node inserted after key value %c\n", key);
    printf("the data part of the new node is: %c  ", new->data);
}