#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i = 1, sub, find = 0;
    cin >> n; //total array
    
    while (i <= n)
    {
        find = 0;
        long long ele; //take size of inner array
        cin >> ele;
        vector<int> vect;
        for (int j = 0; j < ele; j++)
        {
            cin >> sub;
            vect.push_back(sub);
        }
        sort(vect.begin(), vect.end());
        // cout << vect.size() << endl;
        for (int i = 0; i < vect.size() - 1; i++)
        {
            if (vect[i + 1] - vect[i] > 1)
            {
                find = 1;
                cout << "NO" << endl;
                break;
            }
        }
        if (find == 0)
        {
            cout << "YES" << endl;
        }
        i++;
    }
    return 0;
}