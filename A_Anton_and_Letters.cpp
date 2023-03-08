#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a = '}', scan;
    int count = 0;
    string str = "";
    bool check = false;

    while (!check)
    {
        cin >> scan;
        

        if (int(scan) >= 97 && int(scan) <= 122)
        {
            str.push_back(scan);
        }
        if (scan == '}')
        {
            check = true;
        }
    }

    sort(str.begin(), str.end());
    

    for (int i = 0; i < str.length(); i++)
    {
        if (std::count(str.begin(), str.end(), str[i]) != 1)
        {
            count++;

            i += std::count(str.begin(), str.end(), str[i])-1;
        }
        else
        {
            count++;
        }
    }
    cout << count;

    return 0;
}