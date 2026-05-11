#include<stdio.h>

int main() {
    int arr[100], i, j, n, maxlen = 0, currentsum, len;

    printf("Enter the elements: ");
    scanf("%d", &n);

    printf("The %d elements are:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        currentsum = 0;

        for(j = i; j < n; j++) {
            currentsum += arr[j];

            if(currentsum == 0) {
                len = j - i + 1;

                if(len > maxlen) {
                    maxlen = len;
                }
            }
        }
    }

    if(maxlen == 0) {
        printf("No subarray with sum 0\n");
    }
    else {
        printf("The longest subarray length with sum 0 is %d\n", maxlen);
    }

    return 0;
}
