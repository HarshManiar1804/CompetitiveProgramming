    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long

    void solve()
    {
        ll n, x, k, factorial = 1;
        cin >> n;

        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        cout << factorial;
    }
    int main()
    {
            ll t = 1;
        cin >> t;
        while (t--)
        {
            solve();
            cout << "\n";
        }
        // ṣolve();
        // fl(i,0,t) //Kickstart
        // {
        //     cout<<"Case #"<<i+1<<": ";
        //     solve();
        // }
        return 0;
    }
