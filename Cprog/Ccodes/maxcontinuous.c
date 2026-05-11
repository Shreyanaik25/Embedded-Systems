#include<stdio.h>
int main()
{
    int i,n,arr[100],currentsum=0,maxsum=0,s=0,start=0,end=0;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    maxsum=arr[0];
    for(i=0;i<n;i++)
    {
        currentsum+=arr[i];
        if(currentsum>maxsum)
        {
            maxsum=currentsum;
            start=s;
            end=i;
        }
        if(currentsum<0)
        {
            currentsum=0;
            s=i+1;
        }
    }
    printf("\nMaximum Subarray Sum = %d\n", maxsum);
    for(i=start;i<end;i++)
    {
        printf("%d\n",arr[i]);
    }
}
