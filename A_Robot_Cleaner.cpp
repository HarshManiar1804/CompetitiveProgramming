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
#define FOR(i, a, b) for (lli i = (a); i <= (b); i++)
#define FORN(i, a, b) for (lli i = (a); i < (b); i++)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr << #x << '=' << (x) << endl;
#define output(x) cout << (x ? "Yes" : "No") << '\n';
#define mxn 100005

using namespace std;
bool isPalindrome(string s)
{
    if (s.size() == 1)
        return true;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}
bool isPrime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
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
ll comb(ll n, ll r)
{
    return fact(n) / (fact(n - r) * fact(r));
}
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
}
int main()
{
    FAST int t = 1;
    cin >> t;
    while (t-- > 0)
    {
        ll n, m, rb, cb, rd, cd, count =INT_MAX;
        cin >> n >> m >> rb >> cb >> rd >> cd;
        if (rd >= rb)
            count = min(count, rd - rb);
        else
            count = min(count, (2 * (n - rb) + (rb - rd)));

        if (cd >= cb)
            count = min(count, cd - cb);
        else
            count = min(count, 2 * (m - cb) + (cb - cd));

        cout << count << endl;
    }
    return 0;
}