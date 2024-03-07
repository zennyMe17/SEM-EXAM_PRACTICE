#include<stdio.h>

int b_s(int arr[], int low, int high, int key)
{
    int mid = (low+high)/2;
    if (arr[mid] == key)
        return mid+1;
    else if (arr[mid] > key)
        return b_s(arr,low,mid-1,key);
    else
        return b_s(arr,mid+1,high,key);
}

void main()
{
    int n;
    printf("Enter the size of an array = ");
    scanf("%d",&n);
    int arr[n],i,key;
    printf("Enter the elements\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key = ");
    scanf("%d",&key);
    printf("%d is found at %d index",key,b_s(arr,0,n-1,key));
}
