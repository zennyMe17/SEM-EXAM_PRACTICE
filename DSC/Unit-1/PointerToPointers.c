#include <stdio.h>

void main()
{
    int x=10;
    int *p1,**p2;
    
    p1=&x;
    p2=&p1;
    
    printf("*p1 = %d\n",*p1);
    printf("**p2 = %d\n",**p2);
}