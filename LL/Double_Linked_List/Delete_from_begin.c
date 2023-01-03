#include<stdio.h>
#include<stdlib.h>

struct node
{
    char info;
    struct node *next;
    struct node *prev;
};

void main()
{
    struct node* head;
    struct node* a;
    struct node* b;
    struct node* c;
    struct node* ptr;

    head = (struct node*)malloc(sizeof(struct node));
    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));

    head->next = a;
    a->info = 'c';
    a->next = b;
    a->prev = NULL;

    b->info = 'q';
    b->next = c;
    b->prev = a;

    c->info = 'd';
    c->next = NULL;
    c->prev = b;
    
   
    if(head==NULL)
    {
        printf("-----underflow-----");
    }
    else
    {
        head = head->next;
        ptr = head;
        (head->next)->prev = NULL;
        printf("the deleted info from node from beginning is : %c", ptr->info);
        free(ptr);
    }
   
}