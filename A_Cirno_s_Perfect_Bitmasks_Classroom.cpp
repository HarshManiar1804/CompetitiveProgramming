// Code by HARSH MANIAR
// Language : C++

//--------------------------Coding Profiles----------------------------/

// Codeforces : https://codeforces.com/profile/HarshManiar
// CodeChef : https://www.codechef.com/users/harshmaniar182
// leetCode : https://leetcode.com/Harsh_Maniar/

//--------------------------Motivation----------------------------/

// dhire dhire mei bhi accha coder ban jaunga... itni jaldi kya hai abhi abhi to maine start kiya hai

//--------------------------Goals----------------------------/

// #CandidateMaster on Codeforces  <--> ★★★★★ on CodeChef

#include <bits/stdc++.h>
using namespace std;

//--------------------------Defines----------------------------/
#define ll long long int
#define sq(a) (a) * (a)
#define MAX 1e9
#define MIN -1e9
#define mod 1000000007
#define pb push_back
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define lld long double
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define charToInt(c) (c - '0')
//---------------------------------------------------------------/

//--------------------------shorts-------------------------------/
#define FAST                     \
    ios::sync_with_stdio(false); \
    cout.tie(0);                 \
    cin.tie(0)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ii (int)
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define AND &&
#define OR ||
#define ROUND(x) round(x) // mathematically correct rounding, that is, to the nearest integer
#define CEIL(x) ceil(x)   // towards more
#define FLOOR(x) floor(x) // towards less
#define TRUNC(x) trunc(x) // removes the fractional part
#define all(v) v.begin(), v.end()
#define OUTPUT(x) cout << (x ? "YES" : "NO") << endl;
//---------------------------------------------------------------/

//--------------------------macros------------------------------/
#define ALL(x) x.begin(), x.end()
#define sz(x) ((ll)x.size())
#define soort(x) sort(ALL(x))
#define soortR(x) sort(x.rbegin(), x.rend())
#define rev(x) reverse(ALL(x))
#define mx_all(x) *max_element(ALL(x))
#define mn_all(x) *min_element(ALL(x))
#define sum_all(x) accumulate(ALL(x), 0ll);
#define mxn 100005
#define LIMIT 1000000
#define Take(X)          \
    for (auto &it : (X)) \
        cin >> it;
#define TakeWithSum(X, S) \
    for (auto &it : (X))  \
        cin >> it, (S) += it;
#define Out(X)           \
    for (auto &it : (X)) \
        cout << it << " ";
//---------------------------------------------------------------/

//--------------------------loops--------------------------------/
#define fi(n) for (ll i = 0; i < n; ++i)
#define rfi(n) for (ll i = n - 1; i >= 0; --i)
#define fj(n) for (ll j = 0; j < n; ++j)
#define fi1(n) for (ll i = 1; i < n; ++i)
#define fl(i, l, r) for (ll i = l; i < r; i++)
//---------------------------------------------------------------/

//--------------------------input-output-------------------------/
#define debug(x) cout << #x << "=" << x << endl;
#define endl '\n'
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define spy cout << "Yes" << endl
#define spn cout << "No" << endl
#define inpt(v) fi(sz(v)) cin >> v[i];
#define oupt(v)           \
    for (auto i : v)      \
        cout << i << " "; \
    cout << endl;
#define SET(x) cout << fixed << setprecision(x);

void _print(int t)
{
    cerr << t;
}
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

template <class A, class B>
ostream &operator<<(ostream &out, const pair<A, B> &a) { return out << "(" << a.first << "," << a.second << ")"; }
template <class A>
ostream &operator<<(ostream &out, const vector<A> &a)
{
    for (const A &it : a)
        out << it << " ";
    return out;
}
template <class A, class B>
istream &operator>>(istream &in, pair<A, B> &a) { return in >> a.first >> a.second; }
template <class A>
istream &operator>>(istream &in, vector<A> &a)
{
    for (A &i : a)
        in >> i;
    return in;
}

//---------------------------------------------------------------/

//--------------------------constants----------------------------/
#define INF 0x3f3f3f3f;  // so that there is no int overflow
#define PI 2 * acos(0.0) // 3.14 ......
//---------------------------------------------------------------/

//--------------------------functions----------------------------/

/*
ll comb(ll n, ll r)
    { return fact(n) / (fact(n - r) * fact(r)); }
*/

/*
bool isPalindrome(string s)             //BoolPalindrome
{
    if (s.size() == 1)
        return true;
    for (int i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i])
        {
            return false;
        }
    return true;
}*/

/*
bool isPrime(ll n)                  //BoolPrime
{
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

*/

/*ll power(ll a,ll n)                                   // power       (a^n)
{
    long long int pow=1;
    for(long long int i=n;i>0;i>>=1)
    {
        if(i&1)
        {
            pow*=a;
        }
        a*=a;
    }
    return pow;
}
*/

/*ll binpower(ll a, ll b)                               // binpower    (a^n)
{
    ll res = 1;
    while(b)
    {
        if(b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
*/

/*vector<char> prime(ll n)                              // prime<char> (1..n)
{
    vector<char> c(n+1,'1');
    c.at(0)='0';
    c.at(1)='0';
    for(int i=2;i*i<=n;i++)
    {
        if(c[i]=='1')
        {
            for(int j=i*i;j<=n;j+=i)
            {
                c.at(j)='0';
            }
        }
    }
    return c;
}
*/

/*vector<int> faster_prime(ll n)                        // prime<int>  (1..n)
{
    vector<int> factor(n+1,0);
    vector<int> prime;
    for(int i=2;i<n;i++)
    {
        if(factor[i]==0)
        {
            factor.at(i)=i;
            prime.push_back(i);
        }
        for(int j=0;j<(int)prime.size() && prime[j]<=i && i*prime[j]<=n;j++)
        {
            factor.at(i*prime[j])=prime[j];
        }
    }
    return prime;
}
*/

/*ll gcd (ll a, ll b)                                     // GCD
{
    return b ? gcd (b, a % b) : a;
}
*/

/*ll lcm(ll a, ll b)                                    // LCM
{
    return (a / gcd(a, b)) * b;
}
*/

/*ll DigitSum(ll n)                                     // SumOfDigits
{
    ll sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
*/

/*
void SumBetweenRange(ll n, ll m)
{
    ll total = (std::abs(n - m) + 1) * (n + m) / 2;
    cout << total;
}
*/

/*ll fib(ll n)                                          // fib         (1..n)
{
    if(n <= 1) return 1;
    else return fib(n-1) + fib(n-2);
}
*/

/*ll DecToBin(ll x)                                     // 10 --> 2
{
    ll t = 0 , b = 1;
    while(x)
    {
        t += (x%2) * b;
        x /= 2;
        b *= 10;
    }
    return t;
}
*/

/*ll BinToDec(ll value)                                 // 2 --> 10
{
    ll result = 0;
    for(ll i = 1; value; value /= 10, i *= 2)
    {
        result += i * (value % 10);
    }
    return result;
}
*/

/*
void printDivisors(ll n)                            // print all divisors
{
    ll i = 1;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
}

*/

/*vector<ll> z(string s)                                // z-function
{
    ll n = (ll) s.length();
    vector<ll> z(n);
    for(ll i = 1, l = 0, r = 0; i < n; ++i)
    {
        if(i <= r)
            z[i] = min(r-i+1,z[i-l]);
        while(i + z[i] < n && s[z[i]] == s[i+z[i]])
            ++z[i];
        if(i+z[i]-1 > r)
            l = i, r = i+z[i]-1;
    }
    return z;
}
*/

/*vector<ll>prefix_func(vector<string>s)                // prefix-function
{
    ll n = (ll)s.size();
    vector<ll>pi(n);
    for(ll i = 1; i < n; ++i)
    {
        ll j = pi[i-1];
        while(j > 0 && s[i] != s[j])
            j = pi[j-1];
        if(s[i] == s[j]) ++j;
        pi[i] = j;
    }
    return pi;
}
*/

/*ll fact(ll n)
{
    if(n < 0)
        return 0;
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
*/

//---------------------------------------------------------------/
void solve()
{
    ll x, ans = 0;
    cin >> x;
    fl(i, 0, 31)
    {
        if (x >> i & 1)
        {
            ans += (1 << i);
            break;
        }
    }
    for (int y = ans;; ++y)
    {
        if ((x & y) && (x ^ y))
        {
            cout << y;
            break;
        }
    }
}
int main()
{
    ll t = 1;
    cin >> t;
    while (t-- > 0)
    {
        solve();
        cout << '\n';
    }
    return 0;
}