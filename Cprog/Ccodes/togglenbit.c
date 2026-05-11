#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the bit position to toggle:");
    scanf("%d",&n);
    int result=num^(1<<(n-1));
    printf("Original Number:%d\n",num);
    printf("After toggle=%d\n",result);
    return 0;

}

