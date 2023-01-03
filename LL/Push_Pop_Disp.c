#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int data;
    struct node *next;
}*top,*top1,*new;
 

void push(int data);
void pop();
void display();
void create(); 
 

 
void main()
{
    int n, ch;
 
    printf("1 for Push\n");
    printf("2 for Pop\n");
    printf("3 for Dipslay\n");
   
    create();
 
    while (1)
    {
        printf("\nEnter choice : ");
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &n);
            push(n);
            break;
        case 2:
            pop();
            break;
        
        case 3:
            display();
            break;
        
        default :
            printf("Please enter correct choice  ");
            break;
        }
    }
}
 
void create()
{
    top = NULL;
}
 
void push(int data)
{
    if (top == NULL)
    {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->next = NULL;
        top->data = data;
    }
    else
    {
        new =(struct node *)malloc(1*sizeof(struct node));
        new->next = top;
        new->data = data;
        top = new;
    }
    
}
 
void display()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (top1 != NULL)
    {
        printf("%d ", top1->data);
        top1 = top1->next;
    }
 }
 
void pop()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\n stack is already empty");
        return;
    }
    else
        top1 = top1->next;
    printf("\nPopped value : %d", top->data);
    free(top);
    top = top1;
    
}