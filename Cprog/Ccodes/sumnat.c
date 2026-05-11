#include<stdio.h>
int main()
{
    int i=1,num,sum=0;
    printf("Enter the N positive numners:\n");
    scanf("%d",&num);
    while(i<=num)
    {
        sum=sum+i;
        i++;
    }
        printf("The sum of natural numbers %d is : %d",num,sum);

}
