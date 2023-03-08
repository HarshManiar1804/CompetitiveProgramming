#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, ans = 0;
    cin >> n;
    int a[n][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        count=0;
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 1)
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        if (count >= 2)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}