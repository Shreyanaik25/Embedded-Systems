#include<stdio.h>
int main()
{
    int arr[100],i,n;
    printf("Enter  elements of an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Rversed array element:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}