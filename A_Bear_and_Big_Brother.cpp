#include<bits/stdc++.h>
using namespace std;
int main()
{
    int limak,bob,i=0;
    cin>>limak;
    cin>>bob;

    while(limak <= bob){
        limak = limak*3;
        bob = bob*2;     
        i++;
     }
    cout<<i;
    return 0;
}