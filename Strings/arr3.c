#include<stdio.h>
int main()
{
    int arr[100],i,n,k;
    printf("Enter elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter kth element:");
    scanf("%d",&k);
    int last=arr[k];
    for(i=k;i>0;i--)
    {
        arr[i]=arr[k];
    }
    printf("Rotated by Kth element :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    } 
    
}