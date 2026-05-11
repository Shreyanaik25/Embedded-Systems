#include<stdio.h>
int main()
{
    int arr[100],*ptr,n,i;
    printf("Enter elements\n");
    scanf("%d",&n);
    printf("%d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    printf("Elements using pointers\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    return 0;

}
