#include<stdio.h>
int main()
{
    int a=10;
    int *q=&a;
    printf("a=%d\n",a);
    printf("&a=%p\n",&a);
    printf("q=%p\n",q);
    printf("*q=%d\n",*q);
}