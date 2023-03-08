#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define in(a)                  \
    for (ll i = 0; i < n; i++) \
    {                          \
        cin >> a[i];           \
    }
#define out(a)                 \
    for (ll i = 0; i < n; i++) \
    {                          \
        cout << a[i] << ' ';   \
    }
#define wee                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

void bfs(int starti, int startj, int n, int m, vector<vector<char>> &mat, vector<vector<char>> &path, vector<vector<int>> &dist)
{
    vector<vector<int>> vis(n, vector<int>(m, -1));
    queue<pair<int, pair<int, int>>> q;
    q.push({0, {starti, startj}});
    vis[starti][startj] = 1;
    pair<int, int> mov[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    map<pair<int, int>, char> direction;
    direction[{1, 0}] = 'U';
    direction[{0, 1}] = 'L';
    direction[{0, -1}] = 'R';
    direction[{-1, 0}] = 'D';

    while (!q.empty())
    {
        auto x = q.front();
        q.pop();

        int curri = x.second.first;
        int currj = x.second.second;
        int currdist = x.first;
        for (int i = 0; i < 4; i++)
        {
            int nexti = curri + mov[i].first;
            int nextj = currj + mov[i].second;

            if (nexti >= n || nextj >= m || nexti < 0 || nextj < 0 || mat[nexti][nextj] == '#' || mat[nexti][nextj] == 'X' )
            {
                continue;
            }
            if (vis[nexti][nextj] != -1 && dist[nexti][nextj] <= 1 + currdist)
            {
                continue;
            }
            q.push({1 + currdist, {nexti, nextj}});
            vis[nexti][nextj] = 1;
            dist[nexti][nextj] = 1 + currdist;
            path[nexti][nextj] = direction[{nexti - curri, nextj - currj}];
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int endi = -1, endj = -1;
    vector<pair<int, int>> pos;
    vector<vector<char>> mat(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];

            if (mat[i][j] == 'E')
            {
                pos.push_back({i, j});
            }
        }
    }
    vector<vector<char>> path(n, vector<char>(m, '?'));
    vector<vector<int>> dist(n, vector<int>(m, 100000000));
    for (auto &x : pos)
    {
        bfs(x.first, x.second, n, m, mat, path, dist);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;

        if (mat[a][b] == 'E' || mat[a][b] == 'X')
        {
            cout << mat[a][b] << endl;
        }
        else if (mat[a][b] == '#')
        {
            cout << 'W' << endl;
        }
        else
        {
            cout << path[a][b] << endl;
        }
    }
}