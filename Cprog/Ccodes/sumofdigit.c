#include<stdio.h>
int main()
{
    int num,sum=0,digit;
    printf("Enter the numbers:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        sum+=digit;
        num/=10;
    }
    printf("The sum of digit is %d",sum);

}
