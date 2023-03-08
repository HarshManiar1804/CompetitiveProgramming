#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int mx = 0, temp = 1, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= temp)
        {
            cnt++;
            temp++;
        }
        else
        {
            mx = max(mx, cnt);
            cnt = 0;
            temp = 1;
        }
    }
    cout << mx + 1 << endl;
}