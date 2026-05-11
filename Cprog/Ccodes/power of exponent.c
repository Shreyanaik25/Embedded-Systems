#include<stdio.h>
int main()
{
    int base,i,exponent,result=1;
    printf("Enter the base:");
    scanf("%d",&base);
    printf("Enter the exponent:");
    scanf("%d",&exponent);
    for(i=1;i<=exponent;i++)
    {
        result*=base;
    }
    printf("Result=%d",result);
}
