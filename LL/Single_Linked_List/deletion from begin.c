#include<stdio.h>
#include<stdlib.h>

 struct node
    {
        char data;
        struct node *next;
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

    a->data = 20;
    a->next = b;
    
    b->data = 30;
    b->next = c;

    c->data = 60;
    c->next = NULL;

    if(head==NULL)
    {
        printf("underflow");
    }
    else
    {
        head = head->next;
        ptr = head;
        
        printf("-----Delete node from begin-----\n");
        printf("the deleted data from node from beginning is : %d", ptr->data);
        free(ptr);
    }

}