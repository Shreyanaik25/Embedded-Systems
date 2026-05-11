#include<stdio.h>
void Checkevenodd(int num)
{
    if(num%2==0)
    {
        printf("%d is an even number\n",num);
    }
    else
    {
        printf("%d is odd number\n",num);
    }
}
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    Checkevenodd(num);
    return 0;
}
