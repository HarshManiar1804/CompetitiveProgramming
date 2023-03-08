#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long red, blue, days = 0, daysLeft = 0;
    bool find = true;

    cin >> red >> blue;

    cout<<std::min(red, blue)<<" ";

    if(red>=blue){
        red-=blue;
        cout<<red/2;
    }
    else{
        blue-=red;
        cout<<blue/2;
    }

    // cout << days << " " << daysLeft;
    return 0;
}
