// Code by HARSH MANIAR
// Language : C++
#include <bits/stdc++.h>
using namespace std;

//--------------------------Defines----------------------------/
#define ll long long
#define int long long
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
#define mn_all(x) *min_element(ALL(x)) xx
#define sum_all(x) accumulate(ALL(x), 0ll);
#define see(x) cout << x;
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

//--------------------------constants----------------------------/
#define INF 0x3f3f3f3f;  // so that there is no int overflow
#define PI 2 * acos(0.0) // 3.14 ......
//---------------------------------------------------------------/

//---------------------------------------------------------------/
void helper()
{
    
}
int32_t main()
{
    ll testCase = 1;
    // cin >> testCase;
    while (testCase-- > 0)
    {
        helper();
        cout << '\n';
    }
    return 0;
}
