#include<stdio.h>
int FirstLast(int);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int result=FirstLast(num);
    printf("Result=%d\n",result);
    return 0;
}
int FirstLast(int n)
{
    int rem,orignal;
    orignal=n;
    rem=orignal%10;
    while(n>=10)
    {
      n/=10;
    }
    int first=n;
    return first+rem;
}