#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <deque>
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
    ll flag = 0;
    long long a, s;
    cin >> a >> s;
    vector<int> b;
    while (s)
    {
        ll x = 0, y = 0;
        x = s % 10;
        y = a % 10;

        if (x >= y)
            b.emplace_back(x - y);
        else
        {
            s /= 10;
            x += (s % 10) * 10;

            if (x <= 18 && x >= 10 && (x - y) <= 9)
                b.emplace_back(x - y);
            else
            {
                flag++;
                break;
            }
        }

        a /= 10;
        s /= 10;
    }

    if (flag || a)
        cout << -1;
    else
    {
        while (b.back() == 0)
            b.pop_back();
        for (int i = b.size() - 1; i >= 0; i--)
            cout << b[i];
    }
}
int main()
{
    FAST int t = 1;
    cin >> t;
    while (t-- > 0)
    {
        solve();
        cout << "\n";
    }
    return 0;
}