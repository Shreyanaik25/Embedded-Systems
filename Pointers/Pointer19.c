#include<stdio.h>

void printArray(int *p, int n);

int main()
{
    int arr[100],n,i;
    printf("Enter elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printArray(arr, n);

    return 0;
}

void printArray(int *p, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p++;
    }
}