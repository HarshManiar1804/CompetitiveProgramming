#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, o, n, x, y, count = 0, arr[200];
    cin >> n;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    cin >> o;
    for (int i = m; i < m + o; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + (m + o));

    for (int i = 0; i < m + o; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
        }
    }
    if (count == n){
        cout << "I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!";
    }
    return 0;
}