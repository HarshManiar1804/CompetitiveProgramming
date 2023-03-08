#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    while (n-- > 0)
    {
        long long math, pro;

        cin >> pro >> math;
        cout<<std::min((pro+math)/4,std::min(math,pro))<<endl;
    }
    return 0;
}