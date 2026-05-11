#include<stdio.h>
int main()
{
    int arr[100],i,n,*p,product=1;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=arr;
    for(i=0;i<n;i++)
    {
        product*=*(p+i);
    }
    printf("The product of an array is %d\n",product);
    return 0;
}
