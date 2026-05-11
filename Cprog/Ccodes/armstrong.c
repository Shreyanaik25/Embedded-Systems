#include<stdio.h>
int main()
{
    int num,reversed=0,remainder,original;
    printf("Enter the number:");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        remainder=num%10;
        reversed=reversed+(remainder*remainder*remainder*remainder);
        num/=10;
    }
    if(original==reversed)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }

}
