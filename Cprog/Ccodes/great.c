#include<stdio.h>
int main()
{
    int a,b ;
    printf("Enter two numbers;\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("The greatest number between a & b is %d",a);
    }
    else
    {
        printf("The greatest number between a & b is %d",b);
    }
}
