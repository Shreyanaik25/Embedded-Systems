#include<stdio.h>
int main()
{
    int arr[100],i,j,n;
    printf("Enter array elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int count=1;
        int found=0;
        for(j=0;j<n;j++)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        continue;
    }
    for(j=i+1;j<n;j++)
    {
           count++;
           printf("%d repeated %d times",arr[i],count);
    }
}