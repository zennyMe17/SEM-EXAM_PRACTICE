#include<stdio.h>
#include<stdlib.h>

void main()
{
    
    int *ptr;
    int n,i;
    
    printf("Enter the number of data = ");
    scanf("%d",&n);
    
    ptr = (int *)malloc(n*sizeof(int));
    // ptr = (int *)calloc(n,sizeof(int));
    
    if (ptr == 0)
    {
        printf("Memory Not Allocated\n");
    }
    
    else{
    for (i=0;i<n;i++)
    {
        ptr[i] = i+1;
    }
    
    
    for (i=0;i<n;i++)
    {
        printf("%d\t",ptr[i]);
    }
    }
    
    printf("\nEnter the new memory = ");
    scanf("%d",&n);
    
    ptr = realloc(ptr,n*sizeof(int));
    
    if (ptr == 0)
    {
        printf("Memory Not Allocated\n");
    }
    
    else{
    for (i=0;i<n;i++)
    {
        ptr[i] = i+1;
    }
    
    
    for (i=0;i<n;i++)
    {
        printf("%d\t",ptr[i]);
    }
    }
    printf("\n");
    free(ptr);
    
}
