#include<stdio.h>
int reverse(int*);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int result=reverse(&num);
    printf("Reverse=%d\n",result);
}
int reverse(int *n)
{
    int rev=0,orignal;
    orignal=*n;
    while(*n)
    {
        rev=rev*10+*n%10;
        *n/=10;
    }
    if(orignal==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}