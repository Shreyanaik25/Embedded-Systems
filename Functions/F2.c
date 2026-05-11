#include<stdio.h>
void even(int);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    even(n);
    return 0;
}
void even(int num)
{
   for(int i=0;i<=num;i++)
   {
    if(i%2==0)
    {
        printf("%d\n",i);
    }
   }
}