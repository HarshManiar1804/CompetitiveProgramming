// code by HarshManiar
#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define fo(i, n) for (ll i = 0; i < n; i++)
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
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define max3(a, b, c) max((a), max((b), (c)))
#define min3(a, b, c) min((a), min((b), (c)))
#define mx_all(c) *max_element((c).begin(), (c).end())
#define mn_all(c) *min_element((c).begin(), (c).end())
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<ll, ll> ml;
template <typename T>
std::istream &operator>>(std::istream &input, std::vector<T> &data)
{
    for (auto &item : data)
        input >> item;
    return input;
}
template <typename T>
std::ostream &operator<<(std::ostream &output, const std::vector<T> &data)
{
    for (auto &x : data)
        output << x << " ";
    return output;
}
//================================

void solve()
{
    ll n, k, count = 0;
    cin >> n;
    ll maxLeft = 0, maxDown = 0, maxUp = 0, maxRight = 0;
    while (n--)
    {
        ll x, y;
        cin >> x >> y;
        if (x < 0)
        {
            maxLeft = max(maxLeft, abs(x));
        }
        else if (y < 0)
        {
            maxDown = max(maxDown, abs(y));
        }
        else if (x > 0)
        {
            maxRight = max(maxRight, abs(x));
        }
        else if (y > 0)
        {
            maxUp = max(maxUp, abs(y));
        }
    }
    count += (2 * maxUp) + (2 * maxDown) + (2 * maxRight) + (2 * maxLeft);
    cout << (count == 0 ? 0 : count);
}
int main()
{
    fastio
        ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
