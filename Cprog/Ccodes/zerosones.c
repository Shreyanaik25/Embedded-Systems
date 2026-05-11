#include<stdio.h>

int main()
{
    int arr[100], n, i;
    int count0 = 0, count1 = 0, count2 = 0;

    printf("Enter the elements:");
    scanf("%d", &n);

    printf("The %d elements are:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count 0s, 1s, 2s
    for(i = 0; i < n; i++) {
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;
        else if(arr[i] == 2) count2++;
    }
    for(i=0;i<n;i++)
    {

    printf("%d\n",count0);
    printf("%d\n",count1);
    printf("%d\n",count2);
}
}
