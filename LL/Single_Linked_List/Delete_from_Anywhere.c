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

    int key=20;
    
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
    printf("-----Delete from anywhere-----\n");
    printf("the deleted info from node from key value %d is : %d ", key,(ptr->next)->info);
    free(ptr);
   
}