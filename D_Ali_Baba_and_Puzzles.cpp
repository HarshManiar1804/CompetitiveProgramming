//Code by HARSH MANIAR
//Language C++
#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define lld unsigned long long int
#define sq(a) (a) * (a)
#define MAX 1e9
#define MIN -1e9
#define mod 1000000007
#define pb push_back
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define ll long double
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define ff first
#define ss second
#define pb push_back        
#define mp make_pair
#define FORALL(i, a) for (auto &(i) : (a))
#define printall(a)       \
    for (auto &(i) : (a)) \
    cout << i << ' '
#define print(a) cout << a << '\n'
#define fl(i, m, n) for (int i = m; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES";
#define pn cout << "NO";
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define sz(c) (int)(c).size()
#define all(x) (x).begin(), (x).end()
#define max3(a, b, c) max((a), max((b), (c)))
#define min3(a, b, c) min((a), min((b), (c)))
#define mx_all(c) *max_element((c).begin(), (c).end())
#define mn_all(c) *min_element((c).begin(), (c).end())
#define debug(x) cerr << #x << '=' << (x) << endl;
#define output(x) cout << (x ? "Yes" : "No") << '\n';
#define mxn 100005
#define LIMIT 1000000

using namespace std;
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    ll c2=a+b-c;
    ll c3=a+(b*c);
    ll c4=a-b+c;
    ll c5=a*b+c;
    ll c6=a-(b*c);
    ll c7=(a*b)-c;

    if(c2 == d || c3 == d|| c4 == d || c5==d || c6==d || c7==d)
        cout<<"YES";
    else    
        cout<<"NO";

    return 0;
}