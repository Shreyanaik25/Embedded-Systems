#include<stdio.h>
int main()
{
    int arr[100],i,n,sum=0;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sum of an array:");
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);

}
