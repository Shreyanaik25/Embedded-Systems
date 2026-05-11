#include<stdio.h>
void NegativeZero(int *,int);
int main()
{
    int arr[100],i,n;
    printf("Enter elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    NegativeZero(arr,n);
     printf("Modified array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;

}
 void NegativeZero(int *p,int n)
 {
    for(int i=0;i<n;i++)
    {
        if(*p<=0)
        {
            *p=0;
        }
        p++;
    }
 }