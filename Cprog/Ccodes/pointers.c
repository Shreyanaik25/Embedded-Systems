#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("The value of a id %d\n",a);
    printf("The value of *p is %d\n",*p);
    printf("The address of a if %p\n",&a);
    printf("the value of p is %p\n",p);
    return 0;
}
