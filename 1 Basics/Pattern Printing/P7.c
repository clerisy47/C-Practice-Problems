#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j <= 2 * i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}