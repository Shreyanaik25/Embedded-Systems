#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("Enter elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    int max = *p;
    int min = *p;
    for(i=0;i<n;i++)
    {
        if(*p>max)
        {
            max=*p;
        }
        else if(*p<min)
        {
            min=*p;
        }
        p++;
    }
    printf("The maximum number=%d\n",max);
    printf("The maximum number =%d\n",min);
    return 0;
    
}