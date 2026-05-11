#include<stdio.h>
int main()
{
    int arr[100],*ptr,i,n;
    printf("Enter elements\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    printf("Elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(ptr+i));
    }


}
