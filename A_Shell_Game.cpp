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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, a[5] = {0};
    cin >> n;
    a[n] = 1;
    for (int i = 0; i < 3; i++)
    {
        int f, e;
        cin >> f >> e;
        swap(a[f], a[e]);
    }
    for (int i = 1; i < 4; i++)
    {
        if (a[i] == 1)
            printf("%d", i);
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
