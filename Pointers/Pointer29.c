#include<stdio.h>
int main()
{
    int arr[100],i,n,j;
    printf("Enter elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
            }
        }
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
    printf("Sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}