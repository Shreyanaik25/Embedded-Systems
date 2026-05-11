#include<stdio.h>
int main()
{
    int arr1[100],i,arr2[100],n;
    printf("enter elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int *p1=arr1;
    int *p2=arr2;
    for(i=0;i<n;i++)
    {
        *p2=*p1;
        p1++;
        p2++;
    }
   printf("Copied array:\n");
   p2=arr2;
    for(i=0;i<n;i++)
    {
        printf("%d\n",*p2);
        p2++;
    }
}