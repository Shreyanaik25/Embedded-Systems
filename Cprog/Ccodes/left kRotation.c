#include<stdio.h>
int main()
{
    int n,i,j,k,arr[100],temp;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the k th index ");
    scanf("%d",&k);
    k=k%n;
    for(j=0;j<k;j++)
    {
        temp=arr[0];
        for(i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
    printf("Kth left rotated array:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
