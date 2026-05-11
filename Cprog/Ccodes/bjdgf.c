#include<stdio.h>
int main()
{
    int n;
    printf("Enter the elements:\n");
    scanf("%d",&n);
    int arr[n],i,sum=0;
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sum of elements:\n");
    for(i=0;i<n;i++)
    {
        sum+=arr[i];

    }
    printf("Sum=%d\n",sum);
}
