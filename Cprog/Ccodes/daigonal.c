#include<stdio.h>

int main()
{
    int arr[100][100], i, j, rows, cols, sumDiagonal = 0;

    printf("Enter Rows: ");
    scanf("%d", &rows);

    printf("Enter Columns: ");
    scanf("%d", &cols);

    // Input matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print matrix
    printf("Matrix is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Diagonal elements + sum
    printf("Diagonal elements are:\n");
    for(i = 0; i < rows; i++)
    {
        if(i < cols)   // to avoid out-of-bounds for non-square matrix
        {
            printf("%d\n", arr[i][i]);
            sumDiagonal += arr[i][i];
        }
    }

    printf("Sum of diagonal elements = %d\n", sumDiagonal);

    return 0;
}
