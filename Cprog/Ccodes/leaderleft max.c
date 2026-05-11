#include<stdio.h>
int main()
{
    int arr[100],n,i,leftmax;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    leftmax=arr[0];
    printf("Leader=%d\n",leftmax);
    for(i=1;i<n;i++)
    {
        if(arr[i]>leftmax)
        {
            leftmax=arr[i];
            printf("Leader=%d\n",leftmax);
        }
    }
}
