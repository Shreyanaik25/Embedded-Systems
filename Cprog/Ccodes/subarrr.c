#include<stdio.h>
int main()
{
    int arr[100],i,j,k,n;
    printf("Enter the element:");
    scanf("%d",&n);
    printf("The %d element are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The subarrays are:\n");
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
                printf("%d\n",arr[k]);
            }
        }
    }
}
