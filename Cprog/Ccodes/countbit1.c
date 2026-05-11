#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number :\n");
    scanf("%d",&n);
    int cnt=0;
    while(n>0)
    {
        n=n&(n-1);
        cnt++;
    }
    printf("The number of bit of %d =%d\n",n,cnt);
}
