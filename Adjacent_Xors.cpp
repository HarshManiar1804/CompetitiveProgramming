#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ans = 0;
        for (int i = 0; i < n; i += 2)
        {
            if (i + 1 >= n)
                continue;
            int xi = (a[i] ^ a[i + 1]);
            int y = ((a[i] + xi) ^ a[i + 1]);
            int z = ((a[i]) ^ (a[i + 1] + xi));
            ans += max(xi, max(y, z));
            // cout << xi << " " << y << " " << z << " " << endl;
        }
        cout << ans << endl;
    }
    return 0;
}