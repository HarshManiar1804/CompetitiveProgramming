#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;

    cin >> input;

    while (input-- > 0)
    {
        int a, b;
        cin >> a >> b;

        if (a < b)
            swap(a, b);
        int n = max(a, 2 * b);
        cout << n*n << endl;
    }

    return 0;
}