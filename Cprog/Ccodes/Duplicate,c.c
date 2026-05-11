#include<stdio.h>
int main()
{
    int arr[100],i,j,k=0,unique[100],n,isDuplicate;
    printf("Enter the array:");
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
    printf("Array after removing Duplicates:\n");
    for(i=0;i<k;i++)
    {
        printf("%d\n",unique[i]);
    }
}
