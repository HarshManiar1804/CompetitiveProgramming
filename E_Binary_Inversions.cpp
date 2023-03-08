#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(vector<int> &a)
{
    int ans = 0, o = 0;
    for (int i = 0; i < a.size(); i++)
    {
        o += a[i];
        if (a[i] == 0)
            ans += o;
    }
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        int z = -1, o = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (z == -1 && a[i] == 0)
                z = i;
            if (a[i] == 1)
                o = i;
        }
        int ans = f(a);
        if (z != -1)
        {
            a[z] = 1;
            ans = max(ans, f(a));
            a[z] = 0;
        }
        if (o != -1)
        {
            a[o] = 0;
            ans = max(ans, f(a));
            a[o] = 1;
        }

        cout << ans << endl;
    }
}