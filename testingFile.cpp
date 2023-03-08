#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    cout << (num / 2) % 2;

    if (num % 2 != 0)
    {
        cout << "NO";
    }
    else
    {
        if ((num / 2) % 2) == 0)
            {
                cout << "NO" << endl;
            }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}