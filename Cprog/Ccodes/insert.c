#include<stdio.h>
int main()
{
    int arr[100],i,n,sum=0,count=0;
    float avg;
    printf("Enter elements\n");
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
    avg=(float)sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>avg)
        {
            count++;
        }
    }
    printf("count=%d",count);

}
