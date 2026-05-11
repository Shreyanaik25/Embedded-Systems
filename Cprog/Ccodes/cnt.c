#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elments:");
    scanf("%d",&n);
    int i,arr[n],evencnt=0,oddcnt=0;
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {

            evencnt++;
            printf("Even element :%d\n",arr[i]);
        }
        else{
            oddcnt++;
            printf("Odd element:%d\n",arr[i]);
        }
    }
    printf("Total Even elements:%d\n",evencnt);
    printf("Total Odd elements:%d\n",oddcnt);
    return 0;
}
