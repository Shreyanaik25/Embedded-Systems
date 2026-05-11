#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int arr[n],i,sum=0;
    printf("Enter the %d elements of array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The sum of arrays:\n");
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("The sum of array %d\n",sum);
    return 0;

}
