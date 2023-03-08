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
#define mx_all(c) *max_element((c).begin(), (c).end())
#define mn_all(c) *min_element((c).begin(), (c).end())
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

int main()
{
    FAST int t;
    cin >> t;
    while (t-- > 0)
    {
        ll n; //no of weapons
    ll H; // health of enemy
    vector<ll> weapon, arr;
    cin >> n >> H;
    for (ll i = 0; i < n; i++)
    {
        ll j;
        cin >> j;
        weapon.push_back(j);
    }
    sort(weapon.begin(), weapon.end());
    if (H <= weapon[n - 1])
        cout << 1<<endl;
    else
    {
        ll c = 0;
        c += 2 * (H / (weapon[n - 1] + weapon[n - 2]));
        if (H % (weapon[n - 1] + weapon[n - 2]) == 0) c += 0;
        else if (H % (weapon[n - 1] + weapon[n - 2]) <= weapon[n - 1]) c++;
        else c += 2;
        cout << c<<endl;
    }
    }
    return 0;
}