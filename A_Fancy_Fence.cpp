//Code by HARSH MANIAR
//Language C++
#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define sq(a) (a) * (a)
#define MAX 1e9
#define MIN -1e9
#define mod 1000000007
#define pb push_back
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, m, n) for (int i = m; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES";
#define pn cout << "NO";
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
#define all(x) (x).begin(), (x).end()
#define max3(a, b, c) max((a), max((b), (c)))
#define min3(a, b, c) min((a), min((b), (c)))
#define mx_all(c) *max_element((c).begin(), (c).end())
#define mn_all(c) *min_element((c).begin(), (c).end())
#define debug(x) cerr << #x << '=' << (x) << endl;
#define output(x) cout << (x ? "Yes" : "No") << '\n';
#define mxn 100005
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }
bool sorta(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
bool sortd(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second); }
bool isPalindrome(string s)
{
    if (s.size() == 1)
        return true;
    for (int i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i])
        {
            return false;
        }
    return true;
}
bool isPrime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            return false;
        }
    return true;
}
static int minFunForThree(ll a, ll b, ll c)
{
    return a < b ? (a < c ? a : c) : (b < c ? b : c);
}
static int minFunForTwo(ll a, ll b)
{
    return a < b ? a : b;
}
static int maxFunForThree(ll a, ll b, ll c)
{
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}
static int maxFunForTwo(ll a, ll b)
{
    return a > b ? a : b;
}

ll fact(ll n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
ll comb(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
struct comp
{
    template <typename T>
    bool operator()(const T &l, const T &r) const
    {
        if (l.second == r.second)
            return l.first < r.first;
        return l.second > r.second;
    }
};
void solve()
{
    ll a;
    cin >> a;
        if (360 % (180 - a) == 0)
            cout<<"YES";
        else
            cout<<"NO";
}
int main()
{
    FAST int t = 1;
    cin >> t;
    while (t-- > 0)
    {
        solve();
        cout << endl;
    }
    return 0;
}
