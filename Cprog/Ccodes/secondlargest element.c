#include<stdio.h>
int findSecondLargestElement(int arr[100],int size)
{
    int i,first=0,second=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if(second>arr[i]&& first!=arr[i]);
        {
            return second;
        }
    }
}
int main()
{
    int arr[100],size,i;
    printf("Enter the number of elements :");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d is second largest element\n",findSecondLargestElement(arr[i],size));
}
