#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, i = 1, g, a, sum = 0;

    cin >> n;

    while (i <= n)
    {
        cin >> g;
        cin >> a;

        if (a-g >= 2 )
        {
            sum++;
        }
        i++;
    }

    cout<<sum;
    return 0;
}