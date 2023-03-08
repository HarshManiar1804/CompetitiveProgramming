#include <bits/stdc++.h>

using namespace std;
 int main()
{
    string s;
    cin >> s;
    long long int a[9], f[9] = {0};
    for (long long int i = 0; i < 9; i++)
        cin >> a[i];
    long long int n = s.length();
    for (long long int i = 0; i < n; i++)
    {
        f[s[i] - '1']++;
    }

    for (long long int i = 0; i < n; i++)
    {
        if (f[i] - a[i] >= 0)
            f[i] -= a[i];
        else
            f[i] = 0;
    }
    // for(long long int i=0;i<9;i++)cout<<f[i];
    for (long long int i = 0; i < n; i++)
    {
        if (f[s[i] - '1'] != 0)
        {
            cout << s[i];
            f[s[i] - '1']--;
        }
    }
}