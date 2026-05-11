#include<stdio.h>
int main()
{
    int arr[100],n,i,max,min;
    printf("Enter the element\n");
    scanf("%d",&n);
    printf("%d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    for(i=0;i<n;i++)
    {
    printf("The max number of an array is %d\n",max);
    printf("The min number of an array is %d\n",min);
    return 0;
    }
}
