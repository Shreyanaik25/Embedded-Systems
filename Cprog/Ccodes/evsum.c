#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    int evensum=0,oddsum=0;
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        printf("Elements %d:",i+1);
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
    printf("Even sum:%d\n",evensum);
    printf("Odd sum:%d\n",oddsum);
    return 0;
}
