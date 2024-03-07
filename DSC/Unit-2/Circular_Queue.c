#include<stdio.h>
#include<stdlib.h>
#define N 3

int c_queue[N];
int front=-1,rear=-1;

void enqueue()
{
    if ((rear+1)%N == front)
    {
        printf("Circular queue is full\n");
        return;
    }
    printf("Enter the element = ");
    int x;
    scanf("%d",&x);
    if (rear == -1)
    {
        front=(front+1)%N;
        rear=(rear+1)%N;
        c_queue[rear]=x;
    }
    else
    {
        rear=(rear+1)%N;
        c_queue[rear]=x;
    }
        
}

void dequeue()
{
    if (rear == -1)
    {
        printf("Circular Queue is empty\n");
    }
    else
    {
        printf("%d is removed\n",c_queue[front]);
        front=(front+1)%N;
    }
    
}

void display()
{
    if (rear == -1)
    {
        printf("Circular Queue is empty\n");
    }
    else
    {
        printf("Elements in the queue are =\t");
        int i=front;
        while(i!=rear)
        {
            printf("%d\t",c_queue[i]);
            i=(i+1)%N;
        }
        printf("%d\n",c_queue[i]);
    }
}

void peek()
{
    if (rear == -1)
    {
        printf("Queue is Empty\n");
        return;
    }
    printf("Front = %d\tRear = %d\n",c_queue[front],c_queue[rear]);
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
