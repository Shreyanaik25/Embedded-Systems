#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0,*ptr;
    printf("Enter elements:");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    for(i=0;i<n;i++)
    {
        sum+=*(ptr+i);
    }
    printf("The sum of elements of an array =%d\n",sum);
}
