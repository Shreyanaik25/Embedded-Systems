#include<stdio.h>
int main()
{
    int first,second,arr[100],i,n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    first=second=0;
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
    printf("The largest element is %d\n",first);
     printf("The second largest element is %d\n",second);
}
