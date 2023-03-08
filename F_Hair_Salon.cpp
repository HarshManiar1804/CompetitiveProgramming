#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n, i = 0, m = 0, x = 0, mx = INT_MIN;
    cin >> n;
    // int a[n], b[n];
    vector<int> a(n), b(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    set<int> s, s1;
    for (int i : a)
        s.insert(i);
    for (int i : b)
        s1.insert(i);
    for (int i = 0; i < n; i++)
    {
        if (s.find(b[i]) == s.end())
        {
            cout << b[i] << "\n";
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s1.find(a[i]) == s1.end())
        {
            cout << a[i] << "\n";
            break;
        }
    }
    return 0;
}