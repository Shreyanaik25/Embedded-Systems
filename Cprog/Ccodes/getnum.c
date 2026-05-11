#include<stdio.h>
int getnumber();
int main()
{
    int num =getnumber();
    printf("The number is %d\n",num);
    return 0;
}
int getnumber()
{
    return 100;
}
