#include<stdio.h>
int main()
{
    int arr[100],n,i,*ptr;
    printf("Enter elements\n");
    scanf("%d",&n);
    printf("%d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    printf("Rversed array\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",*(ptr+i));
    }
    return 0;
}
