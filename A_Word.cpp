#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int u=0,l=0;

    for(char x:s){
        if(x >= 65 && x<=90){
            u++;
        }
        if(x>=97 && x<=122){
            l++;
        }
    }

    if(u> l){
         transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout<<s;
    return 0;
}