#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0;
    float avg;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=(float)sum/n;
    printf("The sum of elements are:%d\n",sum);
    printf("The average of elements are:%f\n",avg);
}
