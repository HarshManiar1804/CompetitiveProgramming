#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n,c=0;
    cin >> n;
    int magnet[n];

    for (int i = 0; i < n; i++)
    {
        cin >> magnet[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(magnet[i] != magnet[i+1]){
            c++;
        }
    }
    cout<<c;

    return 0;
}