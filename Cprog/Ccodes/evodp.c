#include<stdio.h>
int main()
{
    int arr[100],*ptr,Evencount=0,oddCount=0,n,i;
    printf("Enter elements \n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)%2==0)
        {
            Evencount++;
        }
        else
        {
            oddCount++;
        }
    }
    printf("The even nunbers in an array are %d\n",Evencount);
    printf("The odd numbers in an array are %d\n",oddCount);
}
