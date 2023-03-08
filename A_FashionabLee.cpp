#include <bits/stdc++.h>
using namespace std;
int main()
{

    int j,i;
    cin>>j;
    while(j-- >0){
        cin>>i;
        if(i % 4 ==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}