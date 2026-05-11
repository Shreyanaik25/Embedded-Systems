#include<stdio.h>
int main()
{
    int arr[4]={5,8,2,9};
    printf("%d\n",arr[0]);
    printf("%d\n",arr[2]);
    arr[1]=7;
    printf("Priting updated array elements:\n");
    for(int i=0;i<4;i++)
    {
        printf("%d\n",arr[i]);
    }
}