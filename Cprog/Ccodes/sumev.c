#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0,j,count=0;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            continue;
        sum=0;
        for(j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum%2==0)
                count++;
        }
    }
    printf("Number of subarrays having evensum and starting from odd number is %d\n",count);
    return 0;
}
