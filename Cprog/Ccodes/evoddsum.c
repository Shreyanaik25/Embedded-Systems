#include<stdio.h>
int main()
{
    int arr[100],i,n,evensum=0,oddsum=0;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
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
        else
        {
            oddsum+=arr[i];
        }
    }
    printf("The sum of even numbers are %d\n",evensum);
    printf("The sum of odd numbers are %d\n",oddsum);
}
