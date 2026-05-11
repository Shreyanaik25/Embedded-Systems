#include<stdio.h>
void Automorphic(int);
int main()
{
   int num;
   printf("Enter number:");
   scanf("%d",&num);
   Automorphic(num);
   return 0;
}
void Automorphic(int n)
{
    int last_digit,sq;
    sq=n*n;
    last_digit=sq%10;
    if(last_digit==n)
    {
        printf("The number is Automorphic number\n");
    }
    else
    {
        printf("The number is not Automorphic number\n");
    }
}