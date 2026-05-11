#include<stdio.h>
int main()
{
    int n1,n2,arr1[100],arr2[100],i,j,merged[200];
    printf("Enter the element of array1\n");
    scanf("%d",&n1);
    printf("The %d elements are\n",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of array 2\n");
    scanf("%d",&n2);
    printf("The %d elements are\n",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Merged arrays\n");
    for(i=0;i<n1;i++)
    {
        merged[i]=arr1[i];
    }
    for(i=0;i<n2;i++)
    {
        merged[n1+i]=arr2[i];
    }
    for(i=0;i<n1+n2;i++)
    {
        printf("%d\n",merged[i]);
    }
    int n=n1+n2,temp;
    printf("Ascending Sorting the merged array\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(merged[j]>merged[j+1])
            {
                temp=merged[j];
                merged[j]=merged[j+1];
                merged[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {

    printf("%d\n",merged[i]);
    }
}
