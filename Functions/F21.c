#include<stdio.h>
void Harshad(int);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    Harshad(num);
    return 0;
}
void Harshad(int n)
{
    int rem,sum=0;
    int original=n;
    while(n)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    if(original%sum==0)
    {

        printf("Its a Harshad number\n");
    }
    else
    {
        printf("The number is not Harshad number\n");
    }
}
