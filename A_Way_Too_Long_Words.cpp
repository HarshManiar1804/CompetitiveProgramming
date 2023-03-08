#include<bits/stdc++.h>
#include<array>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;

    string arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
        
    }
    for(int j=0;j<n;j++){
        transform(arr[j].begin(), arr[j].end(), arr[j].begin(), ::tolower);
        if(arr[j].length() > 10 ){
            cout<<arr[j].at(0)<<arr[j].length()-2<<arr[j].at(arr[j].length()-1)<<endl;

        }else{
            cout<<arr[j]<<endl;
        }
    }
    return 0;
}