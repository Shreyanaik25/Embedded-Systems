#include<stdio.h>
int main()
{
    int n;
    printf("Enter the elements:\n");
    scanf("%d",&n);
    int arr[n],i,evencount,oddcount,evensum=0,oddsum=0;
    printf("Enter %d elments:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    evencount=0;
    oddcount=0;
    for(i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            evensum+=arr[i];
            evencount++;
            printf("Even numbers:%d\n",arr[i]);
        }
        else
        {
            oddsum+=arr[i];
            oddcount++;
            printf("Odd numbers:%d\n",arr[i]);
        }
    }
    printf("Even count=%d\n",evencount);
    printf("Odd count=%d\n",oddcount);
    printf("Even Sum=%d\n",evensum);
    printf("Odd sum=%d\n",oddsum);
    return 0;
}
