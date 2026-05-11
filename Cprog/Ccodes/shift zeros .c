#include<stdio.h>
int main()
{
    int arr[100],i,n,j;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]==0)
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("Zeros right shift:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}
