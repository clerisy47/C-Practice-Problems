#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (char j = 'A' + n - i - 1; j <= 'A' + n - 1; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }

    return 0;
}
