// Code by HARSH MANIAR
// Language : C++

//--------------------------Coding Profiles----------------------------/

// Codeforces : https://codeforces.com/profile/HarshManiar
// CodeChef : https://www.codechef.com/users/harshmaniar182
// leetCode : https://leetcode.com/Harsh_Maniar/

//--------------------------Motivation----------------------------/

// dhire dhire mei bhi accha coder ban jaunga... itni jaldi kya hai abhi abhi to maine start kiya hai

//--------------------------Goal----------------------------/

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
//---------------------------------------------------------------/

//--------------------------constants----------------------------/
#define INF 0x3f3f3f3f;  // so that there is no int overflow
#define PI 2 * acos(0.0) // 3.14 ......
//---------------------------------------------------------------/

void solve()
{
    string s;
    cin >> s;
    ll mid = (s.size() / 2 - 1) + s.size() % 2;
    ll i = mid + 1, j = mid - 1;
    cout << s[mid];
    for (ll step = 0; step < s.size() - 1; step++)
    {
        if (step % 2 == 0)
        {
            cout << s[i];
            i++;
        }
        else
        {
            cout << s[j];
            j--;
        }
    }
}
int main()
{
    ll t = 1;
    // cin >> t;
    while (t-- > 0)
    {
        solve();
        cout << '\n';
    }
    return 0;
}