// Code by HARSH MANIAR
// Language C++
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
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define lld long do uble
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
// for prime series
using namespace std;
// #for prime number TLE problem
// long long i, j;
// long long prime_flag[LIMIT];
// void calculate_prime_flag(){
//     prime_flag[0] = prime_flag[1] = 1;
//     for(i=2;i<LIMIT;i++){
//         if (prime_flag[i]==0){
//             for(j=i*i;j<LIMIT;j+=i){
//                 prime_flag[j] = 1;
//             }
//         }
//     }
// }
// prime_flag[int(sqrt(n))]

// temp for map
// map<string, int> match;

//     while (t-- > 0)
//     {
//         string str;
//         cin >> str;
//         if (match.find(str) == match.end())
//             match.insert(std::pair<string, ll>(str, 1));
//         else
//             match[str]++;
//     }
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }

bool sorta(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
bool sortd(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second); }
bool isPalindrome(string s)
{
    if (s.size() == 1)
        return true;
    for (int i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i])
        {
            return false;
        }
    return true;
}
bool isPrime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
static int minFunForThree(ll a, ll b, ll c)
{
    return a < b ? (a < c ? a : c) : (b < c ? b : c);
}

static int maxFunForThree(ll a, ll b, ll c)
{
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

ll fact(ll n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

ll comb(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }

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
    ll n;
    cin >> n;

    vll vec(n);
    vll vec1(n, 0);
    for (auto &in : vec)
        cin >> in;

    ll m = MIN;
    for (ll i = n-1; i >= 0; i--)
    {
        m = max(m, vec[i]);

        if (m > 0)
        {
            vec1[i] = 1;
            m--;
        }
    }

    for (auto i : vec1)
        cout << i << " ";
}
int main()
{
    FAST int t = 1;
    cin >> t;
    while (t-- > 0)
    {
        solve();
        cout << endl;
    }
    return 0;
}
