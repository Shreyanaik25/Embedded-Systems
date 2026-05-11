#include<stdio.h>
int main()
{
    int n;
    printf("Enter the elements:\n");
    scanf("%d",&n);
    int arr[n],i,max ,third,second;
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    second=-1;
    third =-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            third=second;
            second=max;
            max=arr[i];
        }
        else if(arr[i]>second && arr[i]!=max)
        {
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third && arr[i]>second && arr[i]!=max)
        {
            third=arr[i];
        }
    }
    printf("Third largest element is: %d\n", third);
}
