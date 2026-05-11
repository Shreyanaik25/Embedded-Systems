#include<stdio.h>
int main()
{
    int arr[100],i,n,temp;
    printf("Enter elements:");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
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
    printf("Printing the left rotate\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
