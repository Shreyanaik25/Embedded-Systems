#include<stdio.h>
int main()
{
    int arr[100],first=0,second=1,i,n;
    printf("Enter element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first)
        {
            second=arr[i];
        }
    }
    printf("First largest element:%d\n",first);
    printf("Second largest element:%d\n",second);
} 