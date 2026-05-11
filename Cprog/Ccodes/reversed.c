#include<stdio.h>
int main()
{
    int num,digit,reversed=0;
    printf("enter the number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        reversed=reversed*10+digit;
        num/=10;
    }
    printf("Reversed number:%d",reversed);
    return 0;
}
