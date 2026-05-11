#include<stdio.h>
void Zeroshift(int *,int);
int main()
{
    int arr[100],i,n;
    printf("Enter the elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Zeroshift(arr,n);
    printf("MOdified arry\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
void Zeroshift(int *p,int n)
{
    int i,j;
    for(i=0;i<n-i;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(p+j==0)
            {
                int temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
            p++;
        }
    }
}