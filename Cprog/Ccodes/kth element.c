#include<stdio.h>
int main()
{
    int n,arr[100],i,j,k,temp;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Kth index for rotation:");
    scanf("%d",&k);
    k=k%10;
    for(j=0;j<k;j++)
    {
        temp=arr[0];
        for(i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
    printf("Left rotation by kth element are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
