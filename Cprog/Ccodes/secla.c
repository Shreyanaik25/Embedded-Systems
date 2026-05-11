#include<stdio.h>
int main()
{
    int first,second,i,arr[100],n;
    printf("enter the element:");
    scanf("%d",&n);
    printf("the %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    first=second=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first)
        {
            second =arr[i];
        }
    }
    printf("The second largest element is %d\n",second);
    for(i=0;i<n;i++)
    {
        if(arr[i]<first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]<second && arr[i]!=first)
        {
            second =arr[i];
        }

    }
    printf("The second smallest element is %d\n",second);
}
