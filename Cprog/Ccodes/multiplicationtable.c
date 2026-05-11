#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number you want the multiplication table of :");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",num,i,num*i);
    }

}
