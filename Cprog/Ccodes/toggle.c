#include<stdio.h>
int toggleBit(int num,int n)
{
    int result=num^(1<<(n-1));
    printf("Result after toggling %dth bit:%d",n,result);
}
int main()
{
    int n,num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("Enter the bit position to toggle (1-indexed): ");
    scanf("%d", &n);
    toggleBit(num, n);

}
