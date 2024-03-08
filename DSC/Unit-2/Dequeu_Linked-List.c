#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *rear=0,*front=0,*temp,*newnode,*dummy;

void insertion()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    int x;
    printf("Enter the data = ");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=0;
    if(rear == 0)
    {
        rear=front=newnode;
        return;
    }
    int op;
    printf("Enterf the option\n1. To Insert at Beginning\n2. To Insert at Ending\n=\t");
    scanf("%d",&op);
    if (op == 1)
    {
        temp=front;
        front=newnode;
        front->next=temp;
    }
    if (op == 2)
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void display()
{
    if (rear == 0)
    {
        printf("Dequeue is empty\n");
    }
    else
    {
        printf("Elements in the queue are =\t");
        temp=front;
        while (temp != 0)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

void deletion()
{
    if(rear == 0)
    {
        printf("Dequeue is Empty\n");
        return;
    }
    int op;
    printf("Enterf the option\n1. To Delete at Beginning\n2. To Delete at Ending\n=\t");
    scanf("%d",&op);
    if (op == 1)
    {
        temp=front;
        front=front->next;
        free(temp);
    }
    if (op == 2)
    {
        temp = front;
        while(temp != rear)
        {
            dummy=temp;
            temp=temp->next;
        }
        rear = dummy;
        rear->next = 0;
        free(temp);
    } 
}

void peek()
{
    printf("Front = %d\tRear = %d\n",front->data,rear->data);
}

void main()
{
    int ch;
    while(1)
    {
        printf("Enter the choice\n1. To insertion\n2. To Deletion\n3. To Display\n4. To Peek\n5. To Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                insertion();
                break;
            }
            case 2:
            {
                deletion();
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
