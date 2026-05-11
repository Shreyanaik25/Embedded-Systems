#include<stdio.h>
int Product(int);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int result=Product(num);
    printf("Result=%d\n",result);
    return 0;
}
int Product(int n)
{
    int pro=1,rem;
    while(n)
    {
        rem=n%10;
        pro=pro*rem;
        n/=10;
    }
    return pro;
}