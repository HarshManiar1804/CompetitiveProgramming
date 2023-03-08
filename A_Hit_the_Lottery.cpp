#include <bits/stdc++.h>
using namespace std;
int main()
{

    int  n, count = 0,i=0;
    cin >> n;

    while (n!=0)
    {
        if (n >= 100 && n % 100 >=0 )
        {
            count+= n/100;
            n = n % 100;
            // cout<<"n in 100:" << n << endl;
            // cout<<"count is : "<<count<<endl;
        }
        else if (n >= 20 && n % 20 >=0)
        {
            count+= n/20;
            n = n % 20;
            // cout<<"n in 20:" << n << endl;
            // cout<<"count is : "<<count<<endl;

        }
        else if (n >= 10 && n % 10 >=0)
        {
            count+= n/10;
            n = n % 10;
            // cout<<"n in 10:" << n << endl;
            // cout<<"count is : "<<count<<endl;
        }
        else if (n >= 5 && n % 5 >=0)
        {
            count+= n/5;
            n = n % 5;
            //  cout<<"n in 5:" << n << endl;
            //  cout<<"count is : "<<count<<endl;
        }
        else if (n >= 1 && n % 1 >=0)
        {
            count+= n/1;
            n = n % 1;
            // cout<<"n in 1:" << n << endl;
            // cout<<"count is : "<<count<<endl;
        }
    }
    cout << count;
    return 0;
}