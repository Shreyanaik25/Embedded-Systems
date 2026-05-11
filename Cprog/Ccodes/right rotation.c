#include<stdio.h>
int main()
{
    int arr[100],i,n,temp;
    printf("enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[n-1];
    for(i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    printf("Right rotated by one array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
