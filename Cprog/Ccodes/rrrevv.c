#include<stdio.h>
int main()
{
    int n,i,arr[100];
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed elements are:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}
