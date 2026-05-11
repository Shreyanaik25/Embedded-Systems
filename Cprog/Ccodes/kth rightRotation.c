#include<stdio.h>
int main()
{
    int arr[100],i,j,k,n,temp;
    printf("Enter the element:");
    scanf("%d",&n);
    printf("The %d element:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the kth index:");
    scanf("%d",&k);
    k=k%n;
    for(j=0;j<k;j++)
    {
        temp=arr[n-1];
        for(i=n-1;i>=0;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
    }
    printf("Right rotation by kth element:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
