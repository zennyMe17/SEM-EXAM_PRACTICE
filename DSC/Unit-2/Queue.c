#include<stdio.h>
#include<stdlib.h>
#define N 3

int queue[N];
int front=-1,rear=-1;

void enqueue()
{
    if (rear == N-1)
    {
        printf("Queue is Full\n");
        return;
    }
    int x;
    printf("Enter the data = ");
    scanf("%d",&x);
    
    if (rear == -1)
    {
        rear=front=0;
        queue[rear]=queue[front] = x;
    }
    else
    {
        queue[++rear] = x; 
    }

}

void dequeue()
{
    
    if (rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else if (rear == front)
    {
        printf("%d is removed\n",queue[front]);
        rear=front=-1;
    }
    else 
    {
        printf("%d is removed\n",queue[front++]);
    }
}

void display()
{
    if (rear == -1)
    {
        printf("Queue is Empty\n");
        return;
    }
    int i;
    printf("Elements in the queue are =\t");
    for (i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
}

void peek()
{
    if (rear == -1)
    {
        printf("Queue is Empty\n");
        return;
    }
    printf("Front = %d\tRear = %d\n",queue[front],queue[rear]);
}

void main()
{
    int ch;
    while(1)
    {
        printf("Enter the choice\n1. To Enqueue\n2. To Dequeue\n3. To Display\n4. To Peek\n5. To Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                peek();
                break;
            }
            case 5:
            {
                exit(0);
            }
        }
    }
}
