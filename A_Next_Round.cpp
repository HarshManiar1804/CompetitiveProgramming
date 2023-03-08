#include <bits/stdc++.h>
#include <array>
using namespace std;
int main()
{
    int n, m, c=0,ans,count=0;
    cin >> n;
    cin >> m;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == m-1)
        {
            ans = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0){
            count ++;
        }

        else if (a[i] >= ans)
        {
            c++;
        }
    }
    if(count ==n){
        c = 0;
    }
    cout << c;
    return 0;
}