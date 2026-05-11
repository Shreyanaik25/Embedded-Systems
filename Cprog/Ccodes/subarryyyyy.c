#include<stdio.h>
int main()
{
    int n,i,j,k,arr[100];
    printf("Enter the elements are:");
    scanf("%d",&n);
    printf("The %d elements are:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Subarray:\n");
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
