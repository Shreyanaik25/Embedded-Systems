#include<stdio.h>
int main()
{
    int n,arr[100],i,temp;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    printf("Rotating the left element to k th element\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
