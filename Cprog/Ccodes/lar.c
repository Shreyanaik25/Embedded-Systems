#include<stdio.h>
int main()
{
    int n,i,arr[100],min,max;
    printf("Enter the Elements\n");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
    }
    printf("The max number is %d\n",max);
    printf("The min number is %d\n",min);
}
}
/*
#include<stdio.h>
int main()
{
    int num,prime=0,i;
    for(num=2;num<=100;num++)
    {
        prime=1;
    for(i=2;i<=num/2;i++)
    {
        if(num%2==0)
        {
            prime=0;
            break;
        }
    }
    if(prime)
        printf("%d is prime number\n",num);
}
}*/
