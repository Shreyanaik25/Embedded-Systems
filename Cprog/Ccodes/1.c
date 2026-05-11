#include<stdio.h>
int main()
{
    int num,count,i;
    for(num=2;num<=20;num++)
    {
        count=0;
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d\n",num);
        }
    }
}

