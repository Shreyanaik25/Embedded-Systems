#include<stdio.h>
int main()
{
    int arr[100],n,i,*ptr,min;
    printf("Enter element\n");
    scanf("%d",&n);
    printf("%d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    min=*ptr;
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=*(ptr+i);
        }
    }
    printf("The min element of an array id %d\n",min);
    return 0;
}
