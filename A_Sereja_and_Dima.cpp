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
    ll t, sereja = 0, dima = 0;
    cin >> t;
    vector<ll> arr;
    for (int i = 0; i < t; i++)
    {
        ll n;
        cin >> n;
        arr.push_back(n);
    }

    ll front = 0, rear = t - 1;
    for (int i = 0; front != rear + 1; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[front] > arr[rear])
            {
                sereja += arr[front];
                front++;
            }
            else
            {
                sereja += arr[rear];
                rear--;
            }
        }
        else
        {
            if (arr[front] > arr[rear])
            {
                dima += arr[front];
                front++;
            }
            else
            {
                dima += arr[rear];
                rear--;
            }
        }
    }
    cout << sereja << " " << dima;
    return 0;
}