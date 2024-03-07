#include<stdio.h>

int fact(int x)
{
    if (x == 1)
        return 1;
    else
        return x*fact(x-1);
}

void main()
{
    int x;
    printf("Enter the number = ");
    scanf("%d",&x);
    printf("%d! = %d",x,fact(x));
}
