#include<stdio.h>
int main()
{
    int a=5;
    int *p;
    p=&a;
    printf("The value of a=%d\n",a);
    printf("The value of *p=%d\n",*p);
    printf("The value of &a=%p\n",&a);
    printf("The value of p=%p\n",p);
}
