#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + n - 1 - i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}