#include<stdio.h>
int main()
{
    int arr[100],i,n,sum=0;
    printf("Enter array elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("The sum=%d\n",sum);
    
    return 0;
}