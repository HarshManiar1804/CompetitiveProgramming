#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    long int m,o, n,ways=0;
    cin>>n;
    // int home[n],away[n];
    std::vector< int > home;
    std::vector< int > away;
    for(int i=1;i<=n;i++){
        cin>>m;
        cin>>o;
        home.push_back(m);
        away.push_back(o);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(home.at(i) == away.at(j)){
                ways++;
            }
        }
    }

    cout<<ways;
    return 0;
}