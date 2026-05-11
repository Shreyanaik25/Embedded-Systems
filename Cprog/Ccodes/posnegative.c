#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num>0)
    {
        if(num%2==0)
        {
            printf("Positive Even number\n");
        }
        else
        {
            printf("Positive odd number\n");
        }
    }
    else
    {
        if(num%2==0)
        {
            printf("Negative even number\n");
        }
        else
        {
            printf("Negative odd number\n");
        }
    }
    return 0;
}
