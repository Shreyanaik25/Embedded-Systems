#include<stdio.h>
int main()
{
    int n,arr[100],i,k,sum=0;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the k:");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    printf("The sum of window size 1:%d\n",sum);
    for(i=k;i<n;i++)
    {
        sum=sum-arr[i-k]+arr[i];
        printf("The sum of next window:%d\n",sum);
    }
}
