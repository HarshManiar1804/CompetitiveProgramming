#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int General[n];

    for (int i = 0; i < n; i++)
    {
        cin >> General[i];
    }
    int max = General[0], min = General[0], minIndex = 0, maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (max < General[i])
        {
            max = General[i];
            maxIndex = i;
        }
        // cout << "max is: " << maxIndex << endl;
        if (General[i] <= min)
        {
            min = General[i];
            minIndex = i;
        }
        // cout << "min is: " << minIndex<<endl;
    }

    // cout << "before change " << minIndex << endl;

    if (minIndex < maxIndex)
    {
        maxIndex--;
    }
    if (minIndex != n - 1)
    {
        minIndex = (n - 1) - minIndex;
    }
    else{
        minIndex=0;
    }

    // cout << "final min: " << minIndex<<endl;
    // cout << endl
    //      << "final max: " << maxIndex << endl;
    cout << (minIndex + maxIndex);
    return 0;
}