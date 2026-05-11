#include<stdio.h>
int main()
{
    int arr[100],i,n,temp;
    printf("Enter the elements :");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    printf("Left rotation by one element are:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
