#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][2];
    int b = 0, sum = 0, min = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (b % 2 == 0)
            {
                sum -= a[i][j];

                // cout << "sum is :" << sum << endl
                    //  << "min is :" << min << endl
                    //  << "minus by: " << a[i][j] << endl;
                if (min < sum)
                {
                    // swap(min, sum);
                    min = sum;
                }
            }
            else
            {
                sum += a[i][j];

                // cout << "sum is :" << sum << endl
                    //  << "min is :" << min << endl
                    //  << "plus by: " << a[i][j] << endl;
                if (min < sum)
                {
                    // swap(min, sum);
                    min = sum;
                }
            }
            b++;
        }
        // cout << endl;
    }
    cout << min;
    return 0;
}