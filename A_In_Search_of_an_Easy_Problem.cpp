#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=1;
    bool t= false;
    cin>> n;

    while(i<=n){
        cin>>m;
        if(m == 1){
            cout<<"HARD";
            t=true;
            break;
        }
        i++;
    }
    if(!t){
        cout<<"EASY";
    }


    return 0;
}