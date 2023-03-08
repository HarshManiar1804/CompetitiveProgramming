#include<bits/stdc++.h>
using namespace std;
int main()
{

    int persons,height;
    int p, sum=0,i=1;
    cin>>persons;
    cin>>height;
    
    while(i<=persons){
        cin>> p;
        if(p > height){
            sum+=2;
            // cout<<"sum of banded person: "<<sum<<endl;
        }        
        else{
            // cout<<endl<<"before :"<<sum;
            sum+=1;
            // cout<<"sum of standing persons : "<< sum<<endl;
        }
        i++;
    }
    cout<<sum;
    return 0;
}