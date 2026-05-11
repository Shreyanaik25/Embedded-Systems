#include<stdio.h>
int main()
{
    int arr[5];
    int max,min;
    printf("Enter 5 elements:\n");
    for(int i=0;i<5;i++)
    {
        printf("Elements %d:",i+1);
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
           max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Maximum=%d\n",max);
    printf("Minimum=%d\n",min);
    return 0;

}
