#include <stdio.h>
#define MAXSIZE 10
 
void main()
{
    int arr[MAXSIZE];
    int i, j, num, temp;
 
    printf("Enter the value of num- ");
    scanf("%d", &num);
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Input arr is \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", arr[i]);
    }
    /*   Bubble sorting begins */
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < (num - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted in ascending order- \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", arr[i]);
    }


    
     for (i = 0; i < num; i++)
    {
        for (j = 0; j < (num - i - 1); j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
     printf("Sorted in descending order- \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", arr[i]);
    }
}