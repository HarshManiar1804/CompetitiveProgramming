// Code by HARSH MANIAR
// Language C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    vector<string> ans;
    string S, T;
    getline(cin, S);
    stringstream X(S);
    while (getline(X, T, ' '))
    {
        ans.push_back(T);
        count++;
    }
    for (auto i : ans)
    {
        reverse(i.begin(), i.end());
        if (count-- > 1)
            cout << i << " ";
        else
            cout << i;
    }
    return 0;
}