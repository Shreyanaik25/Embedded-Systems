#include<stdio.h>
int main()
{
    int arr[100],i,n;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int rightmax=arr[n-1];
    printf("Leader=%d\n",rightmax);
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]>rightmax)
        {
            rightmax=arr[i];
            printf("Leader=%d\n",rightmax);
        }
    }

}
