#include<stdio.h>
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    if(num>=1 && num<=10)
    {
        printf("Range:1-10");
    }
    else if(num>=11 && num<=20)
    {
        printf("Range:11-20");
    }
    else if(num>=21 && num<=30)
    {
        printf("Range:21-30");
    }
    else
    {
        printf("out of Range");26
    }
}
