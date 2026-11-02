#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + factorial(digit);
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is a Strong number", n);
    else
        printf("%d is not a Strong number", n);

    return 0;
}