#include<stdio.h>
void swap(int * ,int *);
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    return 0;
}
void swap(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("p1*=%d\tp2=%d\n",*p1,*p2);
}