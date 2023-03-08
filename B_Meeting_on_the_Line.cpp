#include <bits/stdc++.h>
#include <math.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define M_PI 3.14159265358979323846

long long M = 1e9 + 7;
long long mod(long long x)
{
    return ((x % M + M) % M);
}
long long add(long long a, long long b)
{
    return mod(mod(a) + mod(b));
}
long long mul(long long a, long long b)
{
    return mod(mod(a) * mod(b));
}

void solve()
{
    int n;
    cin >> n;
    vector<double> x(n), t(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < n; i++)
        cin >> t[i];

    double mini = 2e8, maxi = -2e8;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, x[i] + t[i]);
        mini = min(mini, x[i] - t[i]);
    }
    cout << (maxi + mini) / 2.0 << "\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}