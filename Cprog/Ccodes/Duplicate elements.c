#include<stdio.h>
int main()
{
    int arr[100],unique[100],i,n,j,k=0,isDuplicate;
    printf("Enter elements:");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        isDuplicate=0;
        for(j=0;j<k;j++)
        {
            if(arr[i]==unique[j])
            {
                isDuplicate=1;
                break;
            }
        }
        if(isDuplicate==0)
        {
            unique[k]=arr[i];
            k++;
        }
    }
    printf("Array after removing Duplicated\n");
    for(i=0;i<k;i++)
    {
        printf("%d\n",unique[i]);
    }
    return 0;
}
