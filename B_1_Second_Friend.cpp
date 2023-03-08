#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int t,i;
    cin>>t;
    for(i=1;i<=t;++i)
    {
        int r,c,count=0;
        cin>>r>>c;
        string s[r];
        int j;
        for(j=0;j<r;++j)
        {
            cin>>s[j];
        }
        for(j=0;j<r;++j)
        {
            for(int k=0;k<c;++k)
            {
                if(s[j][k]=='^')
                {
                    ++count;
                }
            }
        }
        if((r==1 || c==1) && count!=0)
        {
            cout<<"Case #"<<i<<": "<<"Impossible\n";
        }
        
        else if(count==0)
        {
            cout<<"Case #"<<i<<": "<<"Possible\n";
            for(j=0;j<r;++j)
            {
                cout<<s[j]<<"\n";
            }
        }
        
        else
        {
            cout<<"Case #"<<i<<": "<<"Possible\n";
            for(j=0;j<r;++j)
            {
                for(int k=0;k<c;++k)
                {
                    cout<<"^";
                }
                cout<<"\n";
            }
        }
    }
    
    
}