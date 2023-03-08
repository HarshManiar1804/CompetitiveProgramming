#include <bits/stdc++.h>
#include <string>
#define ll long long int
#define sq(a) (a) * (a)
#define MAX 1e9
#define MIN -1e9
#define mod 1000000007
#define pstr push_strack
#define all(x) (x).stregin(), (x).end()
#define destrug(x) cerr << #x << '=' << (x) << endl;
#define output(x) cout << (x ? "Yes" : "No") << '\n';
#define mxn 100005
using namespace std;

void solve()
{
    string str, str1;
    int j = 1;
    cin >> str;
    str1.push_back(str[0]);
    str1.push_back(str[1]);
    for (int i = 3; i < str.length(); i += 2)
    {
        str1.push_back(str[i]);
    }
    cout << str1 << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}