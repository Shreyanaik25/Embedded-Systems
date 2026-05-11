#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elments:");
    scanf("%d",&n);
    int i,arr[n],poscnt=0,negcnt=0,zero=0;
    printf("Enter %d Elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            poscnt++;
            printf("Positive Element:%d\n",arr[i]);
        }
        else if(arr[i]<0)
        {
            negcnt++;
            printf("Negative Element:%d\n",arr[i]);
        }
        else if(arr[i]==0)
        {
            zero++;
            printf("Zero:%d\n",arr[i]);
        }

    }
    printf("Poscnt:%d\n",poscnt);
    printf("Negcnt:%d\n",negcnt);
    printf("Zero count:%d\n",zero);
    return 0;

}
