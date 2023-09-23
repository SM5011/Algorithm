#include <iostream>
using namespace std;
int fractional_knapsack(int n, int wight[], int value[], int w)
{
    int valueperwight[n];
    for (int i = 0; i < n; i++)
    {
        valueperwight[i] = value[i] / wight[i];
    }
    int i, j, min_index;

    for (i = 0; i < n - 1; i++)
    {

        min_index = i;

        for (j = i + 1; j < n; j++)
        {
            if (valueperwight[j] < valueperwight[min_index])
            {
                min_index = j;
            }
        }
        swap(valueperwight[i], valueperwight[min_index]);
        swap(wight[i], wight[min_index]);
        swap(value[i], value[min_index]);
    }
    int current_wight=0;
    int max_value=0;
    for(int i=0;i<n;i++){
        if(current_wight + wight[i]<=w){
            current_wight += wight[i];
            max_value +=value[i];
        }
        else{
            max_value += valueperwight[i]*(w - current_wight);
        }
    }
    return max_value;
}
int main()
{
    int n;
    cin >> n;
    int wight[n];
    int value[n];
    for (int i = 0; i < n; i++)
    {
        cin >> wight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    int w;
    cin >> w;
    int max_value = fractional_knapsack(n, wight, value, w);
    cout << max_value << endl;
}