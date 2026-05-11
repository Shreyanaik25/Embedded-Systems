#include<stdio.h>
int main()
{
    int arr[100],n,i,count=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    for(i=0;i<n;i++)
    {
        if(*p%2==0)
        {
            count++;
        }
        p++;
    }
    printf("Number of Even numbers in an array: %d\n",count);

}