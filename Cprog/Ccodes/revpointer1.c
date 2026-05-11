#include<stdio.h>
int main()
{
    int arr[100],*ptr,i,n;
    printf("Enter the elements :");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    printf("Rveresed array\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}
