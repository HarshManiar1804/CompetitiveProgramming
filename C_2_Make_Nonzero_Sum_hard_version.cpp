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
//--------------------------------------------------------------//
void suAavseJavab()
{
    ll numberNakho, vadharo = 0;
    cin >> numberNakho;
    vll vec(numberNakho);
    for (auto &it : vec)
    {
        cin >> it;
        if (it == 0)
            vadharo++;
    }
    if (numberNakho == vadharo)
    {
        cout << "1" << endl
             << "1 " << numberNakho << endl;
        return;
    }
    if ((numberNakho - vadharo) & 1)
    {
        cout << "-1" << endl;
        return;
    }
    vector<pair<int, int>> bolKaik;
    fl(i, 0, numberNakho)
    {
        ll khabrPadiSachaKhotaNi = i;
        if (vec[khabrPadiSachaKhotaNi] == 0)
            bolKaik.pb({i + 1, i + 1});
        else
        {
            ll p = khabrPadiSachaKhotaNi + 1;
            while (p < numberNakho && vec[p] == 0)
                p++;
            if (vec[p] == vec[khabrPadiSachaKhotaNi])
            {
                if ((p - khabrPadiSachaKhotaNi) % 2 == 0)
                {
                    bolKaik.pb({khabrPadiSachaKhotaNi + 1, p - 1});
                    bolKaik.pb({p, p + 1});
                }
                else
                    bolKaik.pb({khabrPadiSachaKhotaNi + 1, p + 1});
            }
            else
            {
                if ((p - khabrPadiSachaKhotaNi) % 2)
                {
                    bolKaik.pb({khabrPadiSachaKhotaNi + 1, p});
                    bolKaik.pb({p + 1, p + 1});
                }
                else
                    bolKaik.pb({khabrPadiSachaKhotaNi + 1, p + 1});
            }
            i = p;
        }
    }
    cout << bolKaik.size() << endl;
    for (auto b : bolKaik)
        cout << b.first << " " << b.second << endl;
}
int32_t main()
{
    ll lavNumber = 1;
    cin >> lavNumber;
    while (lavNumber-- > 0)
    {
        suAavseJavab();
        // cout << '\n';
    }
    return 0;
}
