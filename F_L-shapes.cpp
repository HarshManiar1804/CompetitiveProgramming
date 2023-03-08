#include<bits/stdc++.h>

#define fori(i , a , n) for(int i = a ; i < n ; i++)
#define ll long long int
#define MOD 1000000007

using namespace std;

int dfs(vector<vector<char>> &s , vector<vector<bool>> &nv , int x , int y , int n , int m)
{
    if(x == n || x == -1 || y == m || y == -1 || s[x][y] == '.' || nv[x][y])
    {
        return 0;
    }
    nv[x][y] = true;
    int ret = 0;
    ret += dfs(s , nv , x - 1 , y - 1 , n , m);
    ret += dfs(s , nv , x - 1 , y , n , m);
    ret += dfs(s , nv , x - 1 , y + 1, n , m);
    ret += dfs(s , nv , x , y + 1 , n , m);
    ret += dfs(s , nv , x + 1, y + 1 , n , m);
    ret += dfs(s , nv , x + 1, y , n , m);
    ret += dfs(s , nv , x + 1, y - 1 , n , m);
    return 1 + ret;
}

void solve()
{
    int n , m;
    cin >> n >> m;
    vector<vector<char>> abc;
    vector<vector<bool>> def;
    fori(i , 0 , n)
    {
        vector<char> t;
        vector<bool> te(m , 0) ;
        fori(i , 0 , m) 
        {
            char e;
            cin >> e;
            t.push_back(e);
        }
        s.push_back(t);
        nv.push_back(te);
    }
    fori(i , 0 , n)
    {
        fori(j , 0 , m)
        {
            if(!nv[i][j] && s[i][j] == '*')
            {
                if(( j + 1 < m && i - 1 >= 0 && s[i][j + 1] == '*' && s[i - 1][j] == '*') || (j + 1 < m && i + 1 < n && s[i][j + 1] == '*' && s[i + 1][j] == '*') || (j - 1 >= 0 && i + 1 < n && s[i][j - 1] == '*' && s[i + 1][j] == '*') || (j - 1 >= 0 && i - 1 >= 0 && s[i][j - 1] == '*' && s[i - 1][j] == '*'))
                {
                    if(dfs(s , nv , i , j , n , m) != 3)
                    {
                        cout << "NO\n";
                        return;
                    }
                }
            }
        }
    }
    fori(i , 0 , n)
    {
        fori(j , 0 , m)
        {
            if(s[i][j] == '*' && !nv[i][j])
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main()
{
    int t = 1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout.tie(NULL);
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}