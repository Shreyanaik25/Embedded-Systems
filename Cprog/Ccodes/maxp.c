#include<stdio.h>
int main()
{
    int max,n,*ptr,arr[100],i;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("%d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    max=*ptr;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=*(ptr+i);
        }
    }
    printf("The max element is %d\n",max);

}
