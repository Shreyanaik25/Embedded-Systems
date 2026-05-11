#include<stdio.h>
int main()
{
    int arr[100],i,n,sum=0;
    float avg;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("The sum of elements=%d\n",sum);
    avg=(float)sum/n;
    printf("The avrage of an elements =%.2f\n",avg);
    return 0;
}
