#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0;
    printf("Enter the numbers \n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("The sum of elements are %d",sum);
    return 0;
}
