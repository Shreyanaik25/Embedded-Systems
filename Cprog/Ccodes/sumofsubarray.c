#include<stdio.h>
int main()
{
    int arr[100],i,j,k,n,sum=0;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
        }
    }
    printf("The sum of subarray is %d\n",sum);
}
