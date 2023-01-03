#include<stdio.h>
#include<stdlib.h>

 struct node
    {
        char info;
        struct node *next;
    };

void main()
{
    struct node* head;
    struct node* a;
    struct node* b;
    struct node* c;
    struct node* ptr;
    struct node* ptr1;
    
    head = (struct node*)malloc(sizeof(struct node));
    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));

    head->next = a;

    a->info = 10;
    a->next = b;
    
    b->info = 20;
    b->next = c;

    c->info = 30;
    c->next = NULL;

    if(head==NULL)
    {
        printf("underflow");
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
        
        printf("-----delete from the end-----\n");
        printf("the deleted info from node from last is : %d", ptr->info);
        free(ptr);
    }

}