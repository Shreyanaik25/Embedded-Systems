#include<stdio.h>
int main()
{
    int num,i ,prime=1;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime)
    {
        printf("%d is prime",num);
    }
    else
    {
        printf("%d is not prime",num);
    }
    printf("Thanks for comming\n");
}
