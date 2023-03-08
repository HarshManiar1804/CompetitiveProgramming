#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s;
    cin>>s1;
    s.append(s1);
    sort(s.begin(),s.end());
    cin>>s2;
    sort(s2.begin(),s2.end());
    if((s.compare(s2)) == 0)
        cout<<"YES";
    else    
        cout<<"NO";
    return 0;
}