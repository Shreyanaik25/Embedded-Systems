#include<stdio.h>
int main()
{
    int arr[100],i,n,k,maxsum=0,sum=0;
    float average;
    printf("Enter the numbers:");
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
    maxsum=sum;
    for(i=k;i<n;i++)
    {
        sum=sum-arr[i-k]+arr[i];
        if(sum>maxsum)
        {
            maxsum=sum;
        }
    }
    printf("Maxsum of an subarray of k th element is %d\n",maxsum);
    average=(float)maxsum/k;
    printf("The average of maxsum of an subarray of kth element is %f\n",average);

}
