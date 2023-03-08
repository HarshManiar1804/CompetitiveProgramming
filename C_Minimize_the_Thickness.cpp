// code by HarshManiar
#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define fo(i, n) for (ll i = 0; i < n; i++)
#define fl(i, k, n) for (ll i = k; i < n; i++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define int long long
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
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define max3(a, b, c) max((a), max((b), (c)))
#define min3(a, b, c) min((a), min((b), (c)))
#define mx_all(c) *max_element((c).begin(), (c).end())
#define mn_all(c) *min_element((c).begin(), (c).end())
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<ll, ll> ml;
template <typename T>
std::istream &operator>>(std::istream &input, std::vector<T> &data)
{
    for (auto &item : data)
        input >> item;
    return input;
}
template <typename T>
std::ostream &operator<<(std::ostream &output, const std::vector<T> &data)
{
    for (auto &x : data)
        output << x << " ";
    return output;
}
//================================

bool yes(int i, vector<int> &a, int mid, int sum)
{
    int cur_sum = 0;
    int ind = 0;
    for (int j = i; j < a.size(); j++)
    {
        cur_sum += a[j];
        ind++;
        if (cur_sum > sum || ind > mid)
            return false;
        if (cur_sum == sum)
        {
            ind = 0;
            cur_sum = 0;
        }
    }
    return (cur_sum == 0);
}
int get_sum(vector<int> &a)
{
    int sum = 0;
    for (int i = 0; i < a.size(); i++)
        sum += a[i];
    return sum;
}
bool pos(int mid, vector<int> &a)
{
    int cur_sum = 0;
    for (int i = 0; i < mid; i++)
    {
        cur_sum += a[i];
        if (yes(i + 1, a, mid, cur_sum))
            return true;
    }
    return false;
}
int32_t main()
{
    // ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        cin >> a;
        int sum = get_sum(a);

        int l = 1, r = n;
        int ans = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (pos(mid, a))
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << endl;
    }
}