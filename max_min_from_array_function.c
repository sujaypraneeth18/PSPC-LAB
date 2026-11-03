#include <stdio.h>

int max(int a[], int n)
{
    int i, maximum = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > maximum)
        {
            maximum = a[i];
        }
    }

    return maximum;
}

int min(int a[], int n)
{
    int i, minimum = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] < minimum)
        {
            minimum = a[i];
        }
    }

    return minimum;
}

int main()
{
    int a[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Maximum element = %d\n", max(a, n));
    printf("Minimum element = %d\n", min(a, n));

    return 0;
}