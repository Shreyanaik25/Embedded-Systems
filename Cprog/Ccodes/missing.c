#include<stdio.h>
int main()
{
    int n,arr[100],actualsum=0,totalsum,missing,i;
    printf("Enter the elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        actualsum+=arr[i];
    }
    totalsum=(n+1)*(n+2)/2;
    missing=totalsum-actualsum;
    printf("Missing element=%d\n",missing);
}
