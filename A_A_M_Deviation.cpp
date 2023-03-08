#include <bits/stdc++.h>
using namespace std;
int main()
{

    long int  n, sum = 0, a, a1, a2;
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        cin >> a;
        cin >> a1;
        cin >> a2;

        sum = a - 2 * a1 + a2;
        cout << (((sum%3) == 0) ? "0" : "1")<<endl ;
        
    }
    return 0;
}