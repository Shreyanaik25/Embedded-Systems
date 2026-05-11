#include<stdio.h>
int main()
{
    int n;
    printf("Enter the how many elements you want to print:");
    scanf("%d",&n);
    int arr[n];
    int i,sum=0;
    float avg;
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
          printf("The sum of elements is %d\n",sum);
    avg=sum/n;
        printf("Average= %.2f\n",avg);
        return 0;
}
