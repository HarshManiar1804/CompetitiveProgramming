#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s1,s2;
    int count=0;

    cin>>s1;
    cin>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for(int i=0;i<s1.length();i++){
        if(int(s1[i]) == int(s2[i])  ){
            count++;   
        }
        else if(int(s1[i]) < int(s2[i]) ){
            cout<<-1;
            break;
        }
        else if(int(s1[i]) > int(s2[i]) ){
            cout<<1;
            break;
        }
    }  

    if(count == s1.length()){
        cout<<0;
    }

    return 0;
}