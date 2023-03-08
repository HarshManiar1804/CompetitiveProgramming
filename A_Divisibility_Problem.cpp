#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, i = 1, a, b;
    cin >> n;

    while (i <= n)
    {
        cin >> a,b;
        
            if ((int) a % (int) b == 0)
            {
                cout << 0<<endl;
            }
            else
            {
                cout <<((int)((ceil(a/b)*b)-a))<<endl;
            }
        i++;
    }
    return 0;
}