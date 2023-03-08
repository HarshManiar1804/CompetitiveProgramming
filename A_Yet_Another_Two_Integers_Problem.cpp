#include <bits/stdc++.h>
using namespace std;
int main()
{

    double n, first, second;

    cin >> n;

    while (n-- > 0)
    {
        cin >> first >> second;

        if (first == second)
        {
            cout<<0<<endl;
        }
        else{
            cout<<(int)ceil(abs(first-second)/10)<<endl;
        }
    }

    return 0;
}