#include<stdio.h>

int gcd(int x, int y)
{
    int rem;
    rem = x%y;
    if (rem == 0)
        return y;
    else 
        return gcd(y,rem);
}

void main()
{
    int x,y;
    printf("Enter two number = ");
    scanf("%d %d",&x,&y);
    printf("GCD of %d and %d = %d",x,y,gcd(x,y));
}
