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
int MODFORCC = 26;
string DecryptceasorCypher(string str, int k)
{
    string ans = "";
    for (auto i : str)
    {
        int n = (int)i - k;
        if (n < 65)
        {
            char op = (n + 26);
            ans += op;
        }
        else
            ans += (char)(i - k % 26);
    }
    return ans;
}
string EncryptceasorCypher(string str, int k)
{
    string newStr = "";
    for (auto i : str)
    {
        int n = (int)i + k;
        // cout << n << " " << n - k << endl;
        if (n > 90)
        {
            char op = (n % 91 + 65);
            newStr += op;
        }
        else
            newStr += i + k;
    }
    return newStr;
}
void helper()
{
    int num, x = 0, k;
    string str;
    cin >> str >> k;
    k %= 26;
    string ans = EncryptceasorCypher(str, k);
    cout << "Decrypted String is: \n";
    cout << ans << endl;
    string ans2 = DecryptceasorCypher(ans, k);
    cout << "Encrypted String is: \n";
    cout << ans2;
}
int32_t main()
{
    ll t = 1;
    // cin >> ketlaTestCaseChe;
    while (t-- > 0)
    {
        helper();
        cout << '\n';
    }
    return 0;
}