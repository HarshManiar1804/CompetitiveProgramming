#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;

    cin >> a;
    cin >> b;

    for (int i = 0; i < a.length(); i++)
    {
        if ((a[i] == '1' && b[i] == '0')||(a[i] == '0' && b[i] == '1')){
            cout<<'1';
        }
        else{
            cout<<'0';
        }
    }
    return 0;
}