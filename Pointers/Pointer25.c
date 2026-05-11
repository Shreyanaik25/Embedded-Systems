#include<stdio.h>
void Copy(int *,int *,int );
int main()
{
    int arr1[100],arr2[100],i,n;
    printf("Enter elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    Copy(arr1,arr2,n);
    return 0;
}
void Copy (int *p1,int *p2,int n)
{
    int *start = p2; 
    for(int i=0;i<n;i++)
    {
        *p2=*p1;
        p2++;
        p1++;
    }
    printf("Copied elements:\n");
    p2=start;
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*p2);
        p2++;
    }

}