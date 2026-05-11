#include<stdio.h>
int main()
{
    int arr[100],i,n,temp;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d element are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    printf("The left rotated element:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
