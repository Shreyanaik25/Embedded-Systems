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
    int pos=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            int temp=arr[i];
            arr[i]=arr[pos];
            arr[pos]=temp;
            pos++;
        }
    }
    printf("Updated array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
