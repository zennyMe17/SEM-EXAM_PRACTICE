#include<stdio.h>
#include<ctype.h>

int stack[10];
int top=-1;

void push(int x)
{
    stack[++top] = x; 
}

int pop()
{
    return stack[top--];
}

void main()
{
    int x,n1,n2,n3;
    char expr[100],*e;
    printf("Enter the Expression = ");
    scanf("%s",expr);
    e=expr;
    while (*e != '\0')
    {
        if (isdigit(*e))
        {
            x=*e-'0';
            push(x);
        }
        else
        {
            n2=pop();
            n1=pop();
            switch(*e)
            {
                case '+':
                    n3=n1+n2;
                    break;
                case '-':
                    n3=n1-n2;
                    break;
                case '*':
                    n3=n1*n2;
                    break;
                case '/':
                    n3=n1/n2;
                    break;
            }
            push(n3);
        }
        e++;
    }
    printf("The value is %d",pop());
}
    
