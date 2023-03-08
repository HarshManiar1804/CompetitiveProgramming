#include <bits/stdc++.h>
using namespace std;

int subsequences(int ind, int curSum, int sum, int arr[], int n)
{
    if (curSum > sum)
        return 0;
    if (ind == n)
    {
        if (sum == curSum)
        {

            return 1;
        }
        return 0;
    }
    curSum += arr[ind];
    // pick condition
    int l = subsequences(ind + 1, curSum, sum, arr, n);

    // not  pick condition
    curSum -= arr[ind];
    int r = subsequences(ind + 1, curSum, sum, arr, n);

    return l + r;
}

int main()
{
    int n = 4;
    int arr[] = {1, 2, 1, 2};
    int sum = 2;
    int k = 2;

    cout << subsequences(0, 0, sum, arr, n);
    // cout << ans;
}