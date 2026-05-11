#include<stdio.h>
int main()
{
    int arr[100],i,n,*ptr;
    printf("Enter elements\n");
    scanf("%d",&n);
    printf("%d elements are \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    for(i=0;i<n;i++)
    {
        printf("Elements=%d\n",*(ptr+i));
    }
}
