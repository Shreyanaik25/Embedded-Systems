#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    *p=*p+5;
    printf("%d\n",*p);
}