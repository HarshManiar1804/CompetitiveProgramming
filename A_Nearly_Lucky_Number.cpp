#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cx = 0, cy = 0, c = 0;
    cin >> s;

    for (char x : s)
    {
        if (x == '4' || x == '7')
        {
            if (x == '4')
            {
                cx++;
            }
            if (x == '7')
            {
                cy++;
            }
            c++;
        }
    }

    if ((c == 4 || c==7) && (cx != 0 || cy != 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}