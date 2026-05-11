#include<stdio.h>
int main()
{
    int arr[100],n,i,num;
    printf("Enter elements \n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    num=arr[i];
    int count=0;
    for(i=0;i<n;i++)
    {
    while(arr[i]!=0)
    {
        count++;
        num/=10;
    }
    for(i=0;i<n;i++)
    {
        printf("Number=%d Digit=%d\n",arr[i],count);
    }
}
}
