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
        int ans = 0;
        for (int i = 0; i < n; i += 2)
        {
            if (i + 1 >= n)
                continue;
            int x = (a[i] ^ a[i + 1]);
            int y = ((a[i] + x) ^ a[i + 1]);
            int z = ((a[i]) ^ (a[i + 1] + x));
            ans += max(x, max(y, z));
            cout << x << " " << y << " " << z << " " << endl;
        }
        cout << ans << endl;
    }
    return 0;
}