#include<stdio.h>
#include <stdlib.h>
int main()
{
    int *arr,*p,i,n,product=1;
    printf("Enter the elements :");
    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(int));
    if(arr==NULL)
    {
        printf("Memory Allocation failed!\n");
        return 1;
    }
    p=arr;
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&(*(p+i)));
    }
    for(i=0;i<n;i++)
    {
       product*=*(p+i);
    }
    printf("Product of an array =%d\n",product);
}
