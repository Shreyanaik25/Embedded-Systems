#include<stdio.h>
int main()
{
    int arr[100],i,n,prefix[100],l,r,sum;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The %d element are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    prefix[0]=arr[0];
    for(i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",prefix[i]);
    }
    printf("Enter the Indexs of which you want sum of:");
    scanf("%d %d",&l,&r);
    if(l==0)
    {
        sum=prefix[r];
    }
    else
    {
        sum=prefix[r]-prefix[l-1];
    }
    printf("Sum=%d",sum);
}
