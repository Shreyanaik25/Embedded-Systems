#include<stdio.h>
int main()
{
    int arr[100],currentsum=0,maxsum=0,i,n;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        currentsum+=arr[i];
        if(currentsum>maxsum)
        {
            maxsum=currentsum;
        }
        if(currentsum<0)
        {
            currentsum=0;
        }
    }
    printf("Maximum Sum of  subarray:is %d",maxsum);
}
