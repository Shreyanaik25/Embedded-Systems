#include<stdio.h>
int main()
{
    int arr[100],i,j,n;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sorted elements are:");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}