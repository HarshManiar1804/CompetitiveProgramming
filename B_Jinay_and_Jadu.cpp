#include <iostream>
#include <string>
#define mod 1000000007
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        ll ans = 0;
        ll pow_sum = 0;
        ll pow_base = 1;
        for (int j = 0; j < n; j++)
        {
            ll ascii_val = s[j] - 'a' + 1;
            pow_sum = (pow_sum + ascii_val * pow_base) % mod;
            pow_base = (pow_base * 31) % mod;
            ans = (ans + pow_sum) % mod;
        }

        cout << "Case " << i << ": " << ans << endl;
    }

    return 0;
}
