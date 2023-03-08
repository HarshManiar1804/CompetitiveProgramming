#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s,s1;

    cin>>s;
    cin>>s1;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

    reverse(s1.begin(), s1.end());

    if((s.compare(s1))==0)
        cout <<"YES";
    else
        cout << "NO";
    return 0;
}