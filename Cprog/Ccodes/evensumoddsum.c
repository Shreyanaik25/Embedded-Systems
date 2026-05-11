#include<stdio.h>
int main()
{
    int arr[100],i,n,evensum=0,oddsum=0;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            evensum+=arr[i];
        }
        else if(arr[i]%2!=0)
        {
            oddsum+=arr[i];
        }
    }
    printf("Sum of even numbers are %d\n",evensum);
    printf("Sum of odd numbers are %d\n",oddsum);
    return 0;
}

