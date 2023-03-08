#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i = 1, max = 0, min = 0,count =0, scan;
    cin >> n;

    while (i <= n)
    {
        if (i == 1)
        {
            cin >> scan;
            max = scan;
            min = scan;
        }
        else
        {
            cin >> scan;
            if (scan > max)
            {
                max = scan;
                // cout<<max;
                count++;
            }
            if( scan < min){
                min = scan;
                // cout<<min;
                count++;
            }
        }
        i++;
    }
    cout<<count;
    return 0;
}