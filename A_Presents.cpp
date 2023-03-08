#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>> n;
    int pos[n+1];
    for(int i=1;i<=n;i++){
        cin>> m;

        pos[m] = i; 
    }

    for( int i=1;i<=n;i++){
        cout<< pos[i]<<" ";
    }

    return 0;
}