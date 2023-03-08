#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0,n;
    cin>>n;
    cin>>s;

    for(int i=0;i<n;i++){
        if(s[i] != s[i+1]){
            continue;
        }
        else{
            c++;
        }
    }
    cout<<c;
    return 0;
}