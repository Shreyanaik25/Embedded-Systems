#include<stdio.h>
int Duck(int);
int main()
{
   int num;
   printf("Enter number: ");
   scanf("%d",&num);
   int result=Duck(num);
   if(result==1)
   {
    printf("Its a Duck number\n");
   }
   else
   {
    printf("Its not Duck number\n");
   }
   return 0;
}
int  Duck(int n)
{
    int rem;
    while(n>0)
    {
        rem=n%10;
        if(rem==0)
        {
            return 1;
        }
        n/=10;
    }
    return 0;
}