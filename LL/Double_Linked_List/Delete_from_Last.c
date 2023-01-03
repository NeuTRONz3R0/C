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
    struct node* d;
    struct node* ptr;
    struct node* ptr1;

    head = (struct node*)malloc(sizeof(struct node));
    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    d = (struct node*)malloc(sizeof(struct node));

    head->next = a;
    a->info = 'd';
    a->next = b;
    a->prev = NULL;

    b->info = 'r';
    b->next = d;
    b->prev = a;

    d->info = 'k';
    d->next = NULL;
    d->prev = b;
    
   
    if(head==NULL)
    {
        printf("-----underflow-----");
    }
    else
    {
        ptr = head;
        while(ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        
        printf("the deleted info from node from last is : %c", ptr->info);
        free(ptr);
    }

   
}