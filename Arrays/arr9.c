#include<stdio.h>
int main()
{
    int arr[100],i,n,key;
    printf("Enter the elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter an element to insert:");
    scanf("%d",&key);
    arr[n] = key;
    n++;
    printf("Updated array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}