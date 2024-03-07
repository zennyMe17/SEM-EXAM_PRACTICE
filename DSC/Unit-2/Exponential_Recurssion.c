#include<stdio.h>

int expo(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x*expo(x,y-1);
}

void main()
{
    int x,y;
    printf("Enter the base = ");
    scanf("%d",&x);
    printf("Enter the power = ");
    scanf("%d",&y);
    printf("%d ^ %d = %d",x,y,expo(x,y));
    
}
