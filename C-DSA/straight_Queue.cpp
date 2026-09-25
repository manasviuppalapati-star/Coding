// Program to create a Queue and perform Insert and Delete operations

#include<stdio.h>
#include<stdlib.h>

#define INVALID_VALUE -99999999

typedef struct QueueADT
{
    int capacity;
    int rear;
    int front;
    int *pData;
} Queue;

Queue queue;

// Insert function
void insert(int item)
{
    if(queue.rear == queue.capacity - 1)
    {
        printf("Queue is Full\n");
        return;
    }

    queue.pData[++queue.rear] = item;   

    if(queue.front == -1)
        queue.front = 0;

    printf("%d is inserted\n", item);
}

// Delete function
int deleteQ()
{
    int item;

    if(queue.front == -1)
    {
        printf("Queue is Empty\n");
        return INVALID_VALUE;
    }

    item = queue.pData[queue.front];

    if(queue.front == queue.rear)
    {
        queue.front = -1;
        queue.rear = -1;
    }
    else
    {
        queue.front++;
    }

    return item;
}

int main()
{
    int option, item;

    printf("Enter the capacity: ");
    scanf("%d", &queue.capacity);

    queue.pData = (int *)malloc(queue.capacity * sizeof(int));

    if(queue.pData == NULL)
    {
        printf("Memory Allocation Failed\n");
        return 1;
    }

    queue.front = -1;
    queue.rear = -1;

    do
    {
        printf("\n\n\t\t\tMenu\n");
        printf("\t1.Insert\n");
        printf("\t2.Delete\n");
        printf("\t3.Exit\n");
        printf("\t\t\t\tYour Option: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                printf("Enter the Item to insert: ");
                scanf("%d", &item);
                insert(item);
                break;

            case 2:
                item = deleteQ();

                if(item != INVALID_VALUE)
                    printf("%d is deleted\n", item);

                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Option\n");
        }

    } while(option != 3);

    free(queue.pData);

    return 0;
}




