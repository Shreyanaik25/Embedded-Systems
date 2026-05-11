/*#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter the number which you want factorial of:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d=%d",num,fact);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter the number you want factorial of:\n");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d =%d\n",num,fact);
}
