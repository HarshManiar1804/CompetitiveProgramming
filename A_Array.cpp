// code by HarshManiar
#include <bits/stdc++.h>
using namespace std;

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
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define py cout << "YES"
#define pn cout << "NO"
#define max3(a, b, c) max((a), max((b), (c)))
#define min3(a, b, c) min((a), min((b), (c)))
#define mx_all(c) *max_element((c).begin(), (c).end())
#define mn_all(c) *min_element((c).begin(), (c).end())
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define charToInt(c) (c - '0')
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<ll, ll> ml;

//========================================//

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int cn = 0;
    int cp = 0;
    vector<int> a1, a2, a0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
            cn++;
        else if (a[i] > 0)
            cp++;
    }
    int pos, pos2;
    if (cp == 0)
    {
        int d = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                a1.push_back(a[i]);
                pos = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0 && d < 2 && i > pos)
            {
                a2.push_back(a[i]);
                pos2 = i;
                d++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0 || (a[i] < 0 && i > pos2))
                a0.push_back(a[i]);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                a1.push_back(a[i]);
                pos = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                a2.push_back(a[i]);
                pos2 = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0 || (a[i] < 0 && i > pos) || (a[i] > 0 && i > pos2))
                a0.push_back(a[i]);
        }
    }
    cout << a1.size() << " ";
    for (int i = 0; i < a1.size(); i++)
        cout << a1[i] << " ";
    cout << endl;
    cout << a2.size() << " ";
    for (int i = 0; i < a2.size(); i++)
        cout << a2[i] << " ";
    cout << endl;
    cout << a0.size() << " ";
    for (int i = 0; i < a0.size(); i++)
        cout << a0[i] << " ";
    cout << endl;
}
int main()
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        // cout << "\n";
    }
    return 0;
}
