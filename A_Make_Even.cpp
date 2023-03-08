#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n;
    

    while (n-- > 0)
    {
        cin >> m;
        if (m % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            bool ans = false;
            if (std::to_string(m).at(0) % 2 == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                string str = to_string(m);
                for (int i = 0; i < str.length(); i++)
                {
                    if (int(str[i]) % 2 == 0)
                    {
                        ans = true;
                        cout << 2 << endl;
                        break;
                    }
                }
                if (!ans)
                {
                    cout << -1 << endl;
                }
            }
        }
    }
    return 0;
}