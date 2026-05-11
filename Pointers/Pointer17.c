#include<stdio.h>
void add10(int *);
int main()
{
    int a=20;
    add10(&a);
    return 0;
}
void add10(int *p)
{
    *p+=10;
    printf("*p=%d\n",*p);
}