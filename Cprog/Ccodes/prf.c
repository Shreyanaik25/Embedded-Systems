#include<stdio.h>
int main()
{
    int arr[100],prefix[100],l,r,n,i,sum;
    printf("Enter the elements are:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    prefix[0]=arr[0];
    for(i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    printf("The prefix array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",prefix[i]);
    }
    printf("Enter the index from where to where you want sum of:");
    scanf("%d %d",&l,&r);
    if(l==0)
    {
        sum=prefix[r];
    }
    else
    {
        sum=prefix[r]-prefix[l-1];
    }
    printf("Sum=%d\n",sum);
}
