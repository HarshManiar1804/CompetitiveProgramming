#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1;
    bool t = false;
    cin>>n;

    while(i<=n){
        if(i%2 !=0){
            cout<<"I hate ";
        }
        else{
            cout<<"I love ";
        }
            if(i != n){
                cout<<"that ";
            }
        i++;
    }
        cout<<"it";
    return 0;
}