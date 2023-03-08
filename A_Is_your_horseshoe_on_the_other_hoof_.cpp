#include <bits/stdc++.h>
#include<array>
using namespace std;
int main()
{
    long int i, c = 0,a[4];

    for (int i = 0; i < 4; i++)
        cin >> a[i];



        for (i = 0; i < 3; i++)    
     
    // Last i elements are already in place
    for (int j = 0; j < 4-i-1; j++){
        if (a[j] > a[j+1])
            swap(a[j], a[j+1]);
    }    
    for (int i = 0; i < 4; i++)
    {
        for(int j=i+1;j<4;j++){
            if(a[i] == a[j]){
                c++;
                // cout<<c<<endl;
                // j++;
                i++;
            }
        }
    }
    cout << c;

    return 0;
}