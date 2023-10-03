#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w[] = {3, 2, 5, 4};
    int v[] = {4, 3, 6, 5};
    int n = sizeof(w) / sizeof(w[0]);
    int max_w = 5;
    int mat[n + 1][max_w + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= max_w; j++)
        {
            if (i == 0 || j == 0)
            {
                mat[i][j] = 0;
            }
            else
            {
                if (w[i - 1] <= j)
                {
                    mat[i][j] = max(mat[i - 1][j], mat[i - 1][j - w[i - 1]] + v[i - 1]);
                }
                else
                {
                    mat[i][j] = mat[i - 1][j];
                }
            }
        }
    }

    cout << "max profit: " << mat[n][max_w];

    return 0;
}
