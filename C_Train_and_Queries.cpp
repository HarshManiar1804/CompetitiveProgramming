// code by HarshManiar
#include <bits/stdc++.h>
using namespace std;

#define fl(i, k, n) for (ll i = k; i < n; i++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define ll long long
#define lld long double
#define sq(a) (a) * (a)
#define MAX 1e9
#define MIN -1e9
#define mod 1000000007
#define sp(x, y) fixed << setprecision(y) << x
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define py cout << "YES"
#define pn cout << "NO"
#define max3(a, b, c) max((a), max((b), (c)))
#define min3(a, b, c) min((a), min((b), (c)))
#define mx_all(c) *max_element((c).begin(), (c).end())
#define mn_all(c) *min_element((c).begin(), (c).end())
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define charToInt(c) (c - '0')
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<ll, ll> ml;

//========================================//

void solve()
{
    ll n, k, x, count = 0;
    cin >> n >> x;
    vll vec(n);
    map<ll, vector<ll>> ans;
    fl(i, 0, n)
    {
        cin >> vec[i];
        ans[vec[i]].push_back(i + 1);
    }
    while (x--)
    {
        ll a, b;
        cin >> a >> b;

        if (ans[a].size() == 0 || ans[b].size() == 0)
            cout << "NO\n";
        else
        {
            int s1 = ans[a].size();
            int s2 = ans[b].size();
            ll aa = ans[a][0];
            ll bb = ans[b][s2 - 1];
            if (aa < bb)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
