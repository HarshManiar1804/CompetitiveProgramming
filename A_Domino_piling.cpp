#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;

    cin >> m;
    cin >> n;
    int a = m * n;

    if (a % 2 != 0)
    {

        cout << floor(a / 2 );
    }
    else
    {
        cout << a / 2;
    }
    return 0;
}