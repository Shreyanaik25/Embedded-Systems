#include<stdio.h>
int main()
{
    int arr[100],i,n,max,min,*ptr;
    printf("Enter element \n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    max=min=arr[0];
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)>max)
        {
            max=*(ptr+i);
        }
        else if(*(ptr+i)<min)
        {
            min=*(ptr+i);
        }
    }
    printf("The maximum number of an array is %d\n",max);
    printf("The minimum number of of an array is %d\n",min);
    int diff=max-min;
    printf("The difference between min and max =%d\n",diff);
}
