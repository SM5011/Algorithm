#include <stdio.h>
int main()
{
    int c[] = {1, 2, 5, 10, 20, 50, 100, 200, 500};
    int n = sizeof(c) / sizeof(c[0]);

    int s[10] = {0};
    int j = 0;
    int v;
    printf("Enter :");
    scanf("%d", &v);
    for (int i = n - 1; i >= 0; i--)
    {
        while (v >= c[i])
        {
            v = v - c[i];
            s[j++] = c[i];
        }
    }

    for (int i = 0; i < j; i++)
    {
        printf("%d ", s[i]);
    }
    printf("\nNum of coin: %d", j);
}