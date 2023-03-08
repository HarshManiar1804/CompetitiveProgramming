#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,i=1,m,sum=0;
    cin>>n;
    while(i<=n){
        cin>>m;
        sum+=m;   
        i++;
    }
    printf("%.12f",sum/n);
    return 0;
}