#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1;
    int n, m, j = 0;
    cin >> n;
    cin >> m;
    cin >> s;
    s1 = s;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }

    cout << s;
    return 0;
}