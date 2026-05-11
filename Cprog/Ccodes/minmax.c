#include<stdio.h>
int main()
{
    int arr[100],i,n,min,max;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
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
    printf("The largest number is %d\n",max);
    printf("The smallest number is %d\n",min);

}
