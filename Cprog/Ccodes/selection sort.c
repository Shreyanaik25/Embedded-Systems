#include<stdio.h>
int main()
{
    int arr[100],i,j,maxsum=0,currentsum=0,start=0,end=0,s=0,n;
    printf("Enter the element:");
    scanf("%d",&n);
    printf("the %d elements are:");
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
    }

}
