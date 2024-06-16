#include <stdio.h>

int main()
{
    int n, counter = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", counter++);
        }
        printf("\n");
    }
    return 0;
}