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
    ll m1, m2, m3, m4, m5, w1, w2, w3, w4, w5, h1, h2;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    cin >> w1 >> w2 >> w3 >> w4 >> w5;
    cin >> h1 >> h2;

    ll summ1 = (500 - (m1 * 2)) - (50 * w1);
    ll summ2 = (1000 - (m2 * 4)) - (50 * w2);
    ll summ3 = (1500 - (m3 * 6)) - (50 * w3);
    ll summ4 = (2000 - (m4 * 8)) - (50 * w4);
    ll summ5 = (2500 - (m5 * 10)) - (50 * w5);
    ll summm1 = .3 * 500;
    ll summm2 = .3 * 1000;
    ll summm3 = .3 * 1500;
    ll summm4 = .3 * 2000;
    ll summm5 = .3 * 2500;
    ll sum = 0;
    ll add = h1 * 100;
    ll sub = h2 * 50;
    sum = max(summ1, summm1) + max(summ2, summm2) + max(summ3, summm3) + max(summ4, summm4) + max(summ5, summm5) + add - sub;
    cout << sum;
}
int main()
{
    fastio
        ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    // ṣolve();
    // fl(i,0,t) //Kickstart
    // {
    //     cout<<"Case #"<<i+1<<": ";
    //     solve();
    // }
    return 0;
}
