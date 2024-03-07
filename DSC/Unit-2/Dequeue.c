#include<stdio.h>
#include<stdlib.h>
#define N 5

int dequeue[N];
int front=-1,rear=-1;

void insert_at_last()
{
    if ((rear+1)%N == front)
    {
        printf("Dequeue is full\n");
        return;
    }
    int x;
    printf("Enter the element = ");
    scanf("%d",&x);
    if (rear == -1)
    {
        rear=front=0;
        dequeue[rear] = x;
    }
    else
    {
        rear=(rear+1)%N;
        dequeue[rear] = x;
    }
} 


void insert_at_begining()
{
    if ((rear+1)%N == front)
    {
        printf("Dequeue is full\n");
        return;
    }
    int x;
    printf("Enter the element = ");
    scanf("%d",&x);
    if (rear == -1)
    {
        rear=front=0;
        dequeue[rear] = x;
    }
    else
    {
        front = (front-1+N)%N;
        dequeue[front] = x;
    }
}

void delete_at_beginning()
{
    if (rear == -1)
    {
        printf("Dequeue is Empty\n");
        return;
    }
    printf("%d is deleted\n",dequeue[front]);
    front=(front+1)%N;
}

void delete_at_ending()
{
    if (rear == -1)
    {
        printf("Dequeue is Empty\n");
        return;
    }
    printf("%d is deleted\n",dequeue[rear]);
    rear=(rear-1+N)%N;
}

void display()
{
    if (rear == -1)
    {
        printf("Dequeue is empty\n");
    } 
    else
    {
        int i=front;
        printf("The Elements is Dequeue are =\t");
        while (i != rear)
        {
            printf("%d\t",dequeue[i]);
            i=(i+1)%N;
        }
        printf("%d\n",dequeue[i]);
        
    }
}

void peep()
{
    printf("Front = %d\tRear = %d");

    
}

void main()
{
    int ch;
    while(1)
    {
        printf("Enter the choice\n1. To insert_at_last\n2. To insert_at_begining\n3. To Display\n4. To delete_at_beginning\n5. delete_at_ending \n6. To peep\n7. To Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                insert_at_last();
                break;
            }
            case 2:
            {
                insert_at_begining();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                delete_at_beginning();
                break;
            }
            case 5:
            {
                delete_at_ending();
                break;
            }
            case 6:
            {
                peep();
                break;
            }
            case 7:
            {
                exit(0);
            }
        }
    }
}
