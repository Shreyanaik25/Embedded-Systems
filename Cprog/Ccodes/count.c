#include<stdio.h>
int main()
{
    int arr[100],i,n,poscnt=0,negcnt=0,zerocnt=0;
    printf("Enter the elements \n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            printf("%d element is positive",arr[i]);
            poscnt++;
        }
        else if(arr[i]=0)
        {
            printf("%d element is zero",arr[i]);
            zerocnt++;
        }
        else
        {
            printf("%d element is negative",arr[i]);
            negcnt++;
        }
    }
    printf("Number of positive elements are %d\n",poscnt);
    printf("Number of zeroes are %d\n",zerocnt);
    printf("Number of negative elements are %d\n",negcnt);
    return 0;

}
