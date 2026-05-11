#include<stdio.h>
int main()
{
    int num,cube,original,sum=0,remainder;
    printf("Enter the number\n");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        remainder=num%10;
        cube=remainder*remainder*remainder;
        sum=sum+cube;
        num=num/10;
    }
    if(sum==original)
    {
        printf("%d is an armstrong number\n",original);
    }
    else
    {
        printf("%d is not an armstrong number\n",original);
    }
}
