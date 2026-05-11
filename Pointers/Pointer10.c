#include<stdio.h>
int main()
{
    int arr[100],i,n;
    printf("Enter number of elements of an array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:\n");
    int *p=arr;
    for(i=0;i<n;i++)
    {
        printf("%d\n",*p);
        p++;
    }
    return 0;
}