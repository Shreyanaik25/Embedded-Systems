#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of array elements:");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter the %d numbers of elements:\n",n);
    for( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("your elements:");
    for( i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
