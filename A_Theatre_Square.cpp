#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long double n,m,a,c=0;
    cin>>n>>m;
    cin>>a;
    double ans=ceil(n/a)*ceil(m/a);
    cout<<(long long int)ans;
    return 0;
}
