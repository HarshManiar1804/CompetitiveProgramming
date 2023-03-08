#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <cmath>
#include <string.h>
#define ll long long int
#define debug(r) cout << r << endl;
const ll m = 1000000000 + 7;

ll gcd_ing(ll a, ll b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    if (a > b)
    {
        return gcd_ing(a % b, b);
    }
    else
    {
        return gcd_ing(a, b % a);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        vector<ll> vk(n);
        ll mini = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            vk[i] = v[i];
            if (mini > v[i])
            {
                mini = v[i];
            }
        }
        sort(vk.begin(), vk.end());
        vector<ll> ans;
        for (ll i = 0; i < n; i++)
        {
            if (!(v[i] == vk[i]))
                ans.push_back(v[i]);
        }
        if (ans.size() == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            ll over = 0;
            ll km = ans.size();
            for (ll i = 0; i < km; i++)
            {
                if (ans[i] % mini != 0)
                {
                    over++;
                    break;
                }
            }
            if (over)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}
