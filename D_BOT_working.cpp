#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    set<int> sorted;
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j < n && a[j] == a[i])
        {
            j++;
        }
        sorted.insert(a[i]);
        i = j - 1;
    }

    int ans = sorted.size();
    if (ans == 1)
    {
        cout << n << endl;
    }
    else if (ans == 2)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != *sorted.begin() && a[i] != *sorted.rbegin())
            {
                count++;
            }
        }
        cout << count + 2 << endl;
    }
    else
    {
        cout << 2 << endl;
    }

    return 0;
}
