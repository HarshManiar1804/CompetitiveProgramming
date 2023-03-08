#include <iostream>
#include <vector>
#define xs first
#define ys second
using namespace std;
typedef pair<int, int> PII;
const int N = 1e5 + 10;
int a[N];
vector<PII> nums;
int T, n, m;
int d[N];
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        nums.clear();
        for (int i = 1; i <= n; i++)
            d[i] = 0, cin >> a[i];
        for (int i = 1; i <= m; i++)
        {
            int c, b;
            cin >> c >> b;
            d[c]++;
            d[b]++;
            nums.push_back({c, b});
        }
        int ans = 0x3f3f3f3f;
        if (m % 2 == 0)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 1; i <= n; i++)
            if (d[i] % 2 == 1)
            {
                ans = min(ans, a[i]);
            }
        for (int i = 0; i < m; i++)
        {
            int s = nums[i].xs, t = nums[i].ys;
            if (d[s] % 2 == 0 && d[t] % 2 == 0)
                ans = min(ans, a[s] + a[t]);
        }
        cout << ans << endl;
    }
}