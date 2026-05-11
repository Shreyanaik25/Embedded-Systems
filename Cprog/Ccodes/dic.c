#include<stdio.h>
int main()
{
    int a,b;
    float div;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    div=a%b;
    printf("The remainder is %f",div);
    return 0;
}
