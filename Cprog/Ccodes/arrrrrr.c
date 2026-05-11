#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many elements you want:");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
