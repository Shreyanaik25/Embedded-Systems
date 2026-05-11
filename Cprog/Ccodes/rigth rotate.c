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
    temp=arr[n-1];
    for(i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    printf("Right rotate\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
