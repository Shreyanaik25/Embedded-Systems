#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int result=fact(n);
    printf("Factorial=%d\n",result);
}
int fact(int num)
{
    int f=1,i;
    for(i=1;i<=num;i++)
    {
        f*=i;
    }
    return f;

}