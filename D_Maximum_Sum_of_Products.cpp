#include <bits/stdc++.h>
using namespace std;

/*===========main===========*/

#define aboba                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define r0 return 0;
#define br break;

/*==========print==========*/

#define sp " "
#define en "\n"

/*=========contsts=========*/

#define lim 10e6
#define mil 10e9

/*=========vectors=========*/

#define pb push_back
#define sz size()
#define bg begin()
#define ed end()
#define sortv(v) sort(v.begin(), v.end())

/*==========map============*/

#define ss second
#define ff first

/*========typedefs=========*/

typedef long long int ll;
typedef long double ld;
typedef double db;
typedef string str;

/*========variables========*/

const ll N = 2e3 + 11;
const ll inf = 1e9 + 1;
ll tt = 1;

/*========functions========*/

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a, b;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.pb(x);
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        b.pb(x);
    }
    vector<ll> p(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        p[i + 1] = p[i] + a[i] * b[i];
    }
    ll ans = p[n];
    for (int i = 0; i < n; i++)
    {
        ll c = a[i] * b[i];
        for (int l = i - 1, r = i + 1; l >= 0 && r < n; l--, r++)
        {
            c += a[l] * b[r];
            c += a[r] * b[l];
            ans = max(ans, c + p[l] + (p[n] - p[r + 1]));
        }
        c = 0;
        for (int l = i, r = i + 1; l >= 0 && r < n; l--, r++)
        {
            c += a[l] * b[r];
            c += a[r] * b[l];
            ans = max(ans, c + p[l] + (p[n] - p[r + 1]));
        }
    }
    cout << ans << en;
}

int main()
{
    aboba
        for (int i = 1; i <= tt; i++)
    {
        solve();
    }
    r0;
}
