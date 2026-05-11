#include<stdio.h>
void PosNegZero(int *,int);
int main()
{
    int arr[100],i,n;
    printf("Enter elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    PosNegZero(arr,n);
}
void PosNegZero(int *p,int n)
{
    int poscount=0,negcount=0,zerocount=0,i;
    for(i=0;i<n;i++)
    {
        if(*p>0)
        {
            poscount++;
        }
        else if(*p<0)
        {
            negcount++;
        }
        else
        {
            zerocount++;
        }
        p++;
    }
    printf("Positive Count:%d\n",poscount);
    printf("Negative Count:%d\n",negcount);
    printf("Zeros count:%d\n",zerocount);
}