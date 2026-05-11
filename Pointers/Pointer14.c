#include<stdio.h>
int main()
{
    int arr[100],i,n,sum=0;
    printf("Enter elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    for(i=0;i<n;i++)
    {
        if(*p%2!=0)
        {
           sum+=*p;
        }
        p++;
    }
    printf("The sum of odd numbers=%d\n",sum);
}