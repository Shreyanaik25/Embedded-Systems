#include<stdio.h>
void EvenposSum(int *,int);
int main()
{
    int arr[100],i,n;
    printf("Enter elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    EvenposSum(arr,n);
   return 0;
}
void EvenposSum(int *p,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
           sum+=*p;
        }
        p++;
    }
    printf("Sum = %d\n",sum);
}