#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front=0,*rear=0,*temp,*newnode;

void enqueue()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    int x;
    printf("Enter the data = ");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=0;
    
    if (rear == 0)
    {
        rear=front=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue()
{
    if (rear == 0)
    {
        printf("queue is full\n");
    }
    else
    {
        temp=front;
        printf("%d is removed\n",temp->data);
        front=front->next;
        free(temp);
    }
}

void display()
{
    if (rear == 0)
    {
        printf("queue is full\n");
        return;
    }
    temp=front;
    printf("Elements in the queue are =\t");
    while(temp != 0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void peek()
{
    if (rear == 0)
    {
        printf("Queue is Empty\n");
        return;
    }
    printf("Front = %d\tRear = %d\n",front->data,rear->data);
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
