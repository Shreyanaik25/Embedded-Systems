#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],n,i,*ptr1,*ptr2;
    printf("Enter elements are\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    ptr1=arr1;
    ptr2=arr2;
    for(i=0;i<n;i++)
    {
        *(ptr2+i)=*(ptr1+i);
    }
    printf("Copied array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(ptr2+i));
    }
}
