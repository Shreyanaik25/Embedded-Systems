#include<stdio.h>
int main()
{
    int arr[100],i,n,max=0,min=0;
    printf("Enter an elemnet:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Maximum element of an array:%d\n",max);
    printf("Minimum element of an array:%d\n",min);
    return 0;
}