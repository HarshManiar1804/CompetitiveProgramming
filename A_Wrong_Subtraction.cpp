#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int i=0,m;
    cin>>m;
    while(i<m){
        if(n%10 != 0){
            n--;
        }
        else{
            n=n/10;
        }
        i++;
    }
    cout<<n;
    return 0;
}