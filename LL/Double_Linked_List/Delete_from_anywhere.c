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
    struct node* ptr1;

    char key = 'b';

    head = (struct node*)malloc(sizeof(struct node));
    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));

    head->next = a;
    a->info = 'a';
    a->next = b;
    a->prev = NULL;

    b->info = 'b';
    b->next = c;
    b->prev = a;

    c->info = 'c';
    c->next = NULL;
    c->prev = b;
    
   
    ptr = head;
    
    while(ptr->next !=NULL)
    {
        ptr1 = ptr;
        if((ptr->next)->info == key)
        {
            break;
        }
        else
        {
            ptr = ptr->next;
            break;
        }
    }
    ptr1->next = ptr->next;
    (ptr->next)->prev = ptr->prev;
    printf("the deleted info from node from key value %c is : %c ", key,(ptr->next)->info);
    free(ptr);
  
}