#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cd=0,ca=0;
    cin>>n;

    string s;
    cin>>s;

    cd = count(s.begin(), s.end(), 'D');
    ca = count(s.begin(), s.end(), 'A');


    if(cd > ca){
        cout<<"Danik";
    }
    else if(cd< ca){
        cout<<"Anton";
    }else{
        cout<<"Friendship";
    }


    return 0;
}