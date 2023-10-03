#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c[] = {1, 3, 5};
    int amount = 8;
    int n = sizeof(c) / sizeof(c[0]);
    int mat[n + 1][amount + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= amount; j++)
        {
            if (i == 0)
            {
                mat[i][j] = 0;
                if (j == 0)
                {
                    mat[i][j] = 1;
                }
            }
            else
            {
                if (c[i - 1] > j)
                {
                    mat[i][j] = mat[i - 1][j];
                }
                else
                {
                    mat[i][j] = mat[i - 1][j] + mat[i][j - c[i - 1]];
                }
            }
        }
    }

    cout << "Total number of ways is: " << mat[n][amount];
    return 0;
}
