#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c = 0, sj = 0, b = 0;
    cin >> s;

    sort(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {
        int countVal = count(s.begin(), s.end(), s[i]);
        if (countVal != 1)
        {
            c++;
            i+=countVal-1;
        }
        else
        {
            c++;
        }
    }
    if (c % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}