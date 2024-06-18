#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - 1 - i; j++)
        {
            printf(" ");
        }
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            printf("%c", j);
        }
        for (char j = 'A' + i - (i % 2); j >= 'A'; j--)
        {
            printf("%c", j);
        }

        printf("\n");
    }

    return 0;
}
