#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", j + 1);
        }
        for (int j = 0; j < 2 * n - 2 - 2 * i; j++)
        {
            printf(" ");
        }
        for (int j = i; j >= 0; j--)
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }
    return 0;
}
