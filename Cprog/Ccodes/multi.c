#include<stdio.h>
int main()
{
    int i ,num;
    printf("Enter the number of multiplication table you want:\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",num,i,num*i);
    }
    return 0;
}
