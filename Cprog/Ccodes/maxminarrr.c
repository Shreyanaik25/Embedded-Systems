#include<stdio.h>
int main()
{
    int n,i,max,min,arr[100];
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The %d elements are:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("The maximum numbers is %d\n",max);
    printf("The minimum numbers is %d\n",min);
}
