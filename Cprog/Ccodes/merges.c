#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],i,j,temp,n1,n2,merged[200];
    printf("Enter the elements of arr1\n");
    scanf("%d",&n1);
    printf("The %d elements are\n",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n1-1;i++)
    {
        for(j=0;j<n1-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
        printf("Array 1 ascending sorted \n");
        for(i=0;i<n1;i++)
        {
            printf("%d\n",arr1[i]);
        }
    }
    printf("Enter the elements of arr2\n");
    scanf("%d",&n2);
    printf("The %d elements are\n",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n2-1;i++)
    {
        for(j=0;j<n2-i-1;j++)
        {
            if(arr2[j]>arr2[j+1])
            {
                temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }
    }
    printf("Array 2 ascending sorted \n");
    for(i=0;i<n2;i++)
    {
        printf("%d\n",arr2[i]);
    }
    printf("merging both the sorted array\n");
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
    return 0;

}
