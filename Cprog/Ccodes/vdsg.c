#include<stdio.h>
int main()
{
    int n;
    printf("Enter the elements:\n");
    scanf("%d",&n);
    int arr[n],i,first,second;
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    first=arr[0];
    second=-1;
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
    printf("Second Largest Element:%d",second);
    return 0;
}
