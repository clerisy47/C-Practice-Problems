#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i <= 2 * (n - 1); i++)
    {
        for (int j = 0; j <= 2 * (n - 1); j++)
        {
            int top = i;
            int bottom = (2 * n - 1) - i - 1;
            int left = j;
            int right = (2 * n - 1) - j - 1;
            printf("%d", n - min(min(top, bottom), min(left, right)));
        }
        printf("\n");
    }
    return 0;
}
