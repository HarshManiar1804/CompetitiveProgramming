#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, hired = 0, crime = 0;
    cin >> n;

    while (n-- > 0)
    {
        cin >> m;

        if (m == -1 && hired > 0)
            hired--;
        else if (m == -1 && hired <= 0)
            crime++;
        else
            hired += m;
    }
    cout <<crime ;
    return 0;
}