#include<stdio.h>
int main()
{
    int arr[100],i,n,prefix[100];
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    prefix[0]=arr[0];
    for(i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    printf("The prefix array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",prefix[i]);
    }
}
