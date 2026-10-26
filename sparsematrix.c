#include <stdio.h>

int main()
{
    int a[100][100], r, c, i, j;
    int zero = 0, nonzero = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);

            if(a[i][j] == 0)
                zero++;
            else
                nonzero++;
        }
    }

    if(zero > nonzero)
        printf("It is a sparse matrix\n");
    else
        printf("It is not a sparse matrix\n");

    return 0;
}