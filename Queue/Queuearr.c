#include <stdio.h>

int max = 100;
int q_arr[100];
int rear = -1;
int front = -1;

void insert();
void delete();
void display();


main()
{
    int choice;
    while(1)
    {
        printf("Press 1. to insert element to queue.\n");
        printf("Press 2. to delete element from queue.\n");
        printf("Press 3. to display queue.\n");
        printf("Press 4. to QUIT.\n");
        
        printf("Enter your choice- ");
        scanf("%d",&choice);


        switch(choice)
        {
            case 1:
            insert();
            break;

            case 2:
            delete();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            exit(1);
            default:
            printf("RATS!! option not found \n");
        }
    }   

}

void insert()
{
    int data;
    if(rear==max-1)
    printf("OVERFLOW \n");
    else
    {
        if(front == -1)
        front = 0;
        printf("Enter the element you want to insert- ");
        scanf("%d",&data);
        rear = rear+1;
        q_arr[rear] = data;

    }
}

void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", q_arr[front]);
        front = front + 1;
    }
} 
 
void display()
{
    int i ;
    if(front == - 1)
    printf("Queue is empty... \n");

    else
    {
        printf("Queue - ");
        for(i = front;i<=rear;i++)
        {
            printf("%d",q_arr[i]);

        }
    }   printf("\n");

}