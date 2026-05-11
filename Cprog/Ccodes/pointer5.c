#include<stdio.h>
int main()
{
    int arr[100],*p,i,max,min,n;
    printf("Enter elements:");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    p=arr;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>max)
            max=*(p+i);
        else if(*(p+i)<min)
            min=*(p+i);
    }
    printf("Maximum=%d\n",max);
    printf("Minimum=%d\n",min);
}
