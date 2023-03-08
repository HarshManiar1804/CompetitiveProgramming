#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0)
#define ll long long
#define pb push_back
#define endl '\n'
#define vbe v.begin(), v.end()
#define fr(m,n) for(i=m;i<n;i++)
#define frs(m,n) for(i=m;i<=n;i++)
#define ff for(i=0;i<n;i++)
#define frj(m,n) for(j=m;j<n;j++)
#define fff ff{cin>>a;v.pb(a);}
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define mod 1000000007
#define ld long double
#define inf 0x3f3f3f3f
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pii>
#define vvi vector<vi>
#define all(v) v.begin(), v.end()
#define mp make_pair
#define fi first
#define se second
#define sz size()
int n, m, k, t, i, j, x, y, z, a = 0, b = 0, c = 0, d = 0;
string s, p;

bool idx = 1;

int power(int x, int y) {
    int res = 1;
    while (y > 0) {
        if (y & 1) res = res * x % mod;
        y /= 2;
        x = (x * x) % mod;
    }
    return res;
}

bool prime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

void solve() {
    idx = 1;
    int ans = 0, num = 0, sum = 0, cnt = 0, mi = inf, ma = 0, x = 0, y = 0;
    ld fl = 0, fd = 0, fm = 0;
    vi v, w;
    set<int>ss, ww;

    int f[110][3];
    int a[110];
    cin >> n;
    fr(1, n + 1) {
        cin >> x;
        a[i] = x;
    }
    memset(f, 0x3f, sizeof f);
    f[0][0] = 0;
    fr(1, n + 1) {
        frj(0, 3) {
            if (f[i - 1][j] == inf) continue;
            f[i][0] = min(f[i][0], f[i - 1][j] + 1);
            if (j != 1 && (a[i] & 1)) f[i][1] = min(f[i][1], f[i - 1][j]);
            if (j != 2 && (a[i] & 2)) f[i][2] = min(f[i][2], f[i - 1][j]);
        }
    }
    ans = inf;
    fr(0, 3) {
        ans = min(ans, f[n][i]);
    }
    cout << ans;
    cout << endl;
}

int32_t main() {
    fast;
    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}