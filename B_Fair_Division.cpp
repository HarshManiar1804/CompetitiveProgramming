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
void solve()
{
    int candies, one = 0, two = 0;
    cin >> candies ;
    for (int i = 0; i < candies; i++)
    {
        ll in;
        cin >> in;
        if (in == 1)
            one++;
        else
            two++;
    }
    if (one % 2 == 1)
        cout << "NO"<<endl;
    else if ((two % 2 == 1 && one >= 2) || two % 2 == 0)
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
}
int main()
{
    FAST int t = 1;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}