#include <stdio.h>

int main()
{
    int a[100][100], n, i, j, sum = 0;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Trace of matrix = %d\n", sum);

    return 0;
}