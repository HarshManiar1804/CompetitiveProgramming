#include <bits/stdc++.h>
#include <vector>

using namespace std;

const int MAXN = 2e5 + 5;
vector<int> adj[MAXN];
int n, k;

int dfs(int v, int p)
{
    vector<int> dp;
    for (int u : adj[v])
    {
        if (u != p)
        {
            dp.push_back(dfs(u, v) + 1);
        }
    }
    sort(dp.begin(), dp.end(), greater<int>());
    int res = 0;
    while (!dp.empty() && dp.back() + dp.front() > k)
    {
        dp.pop_back();
        ++res;
    }
    while (dp.size() >= 2 && dp[dp.size() - 1] + dp[dp.size() - 2] <= k)
    {
        dp.pop_back();
        dp.pop_back();
        ++res;
    }
    if (!dp.empty() && dp.back() <= k)
    {
        dp.pop_back();
        ++res;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; ++i)
        {
            adj[i].clear();
        }
        for (int i = 1; i < n; ++i)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cout << dfs(1, 0) << '\n';
    }
    return 0;
}
