#include<stdio.h>
#include<stdlib.h>
#define N 5

int stack[N];
int top=-1,temp;

void push()
{
    if (top == N-1)
    {
        printf("Stack is Full\n");
        return;
    }
    int x;
    printf("Enter the elemnt = ");
    scanf("%d",&x);
    stack[++top] = x; 
}

void pop()
{
    printf("%d is removed\n",stack[top--]);
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }
    for (i=top;i>=0;i--)
    {
        printf("|\t%d\t|\n",stack[i]);
    }
    // printf("\n");
}

void max()
{
    int temp=0,i;
    for (i=0;i<=top;i++)
    {
        if(stack[i]>stack[temp])
        {
            temp = i;
        }
    }
    printf("The max element is = %d\n",stack[temp]);
}

void min()
{
    int temp=0,i;
    for (i=0;i<=top;i++)
    {
        if(stack[i]<stack[temp])
        {
            temp = i;
        }
    }
    printf("The min element is = %d\n",stack[temp]);
}

int search()
{
    int i;
    for (i=0;i<=top;i++)
    {
        if(stack[i] == 2)
        {
            return i;
        }
    }
    
}

void main()
{
    int ch;
    while(1)
    {
        printf("1. To Append\n2. To Delete\n3. To Display\n4. To Find Maximum\n5. To Find Minimum\n6. To Exit\nEnter the choice = ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                max();
                break;
            }
            case 5:
            {
                min();
                break;
            }
            
            case 6:
            {
                printf("The  element is found at = %d\n",search()+1);
                break;
            }
            case 7:
            {
                exit(0);
                break;
            }
        }
    }
}
