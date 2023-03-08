#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,c=0;
    int n;
    bool ans = false;
    cin >> n;
    n++;
    while (!ans)
    {
        std::string m = std::to_string(n);
        c =0;
        for(int i=0;i<m.length();i++){
            if(count(m.begin(), m.end(), m[i])  !=1){
                
                ans = false;
                break;
            }
            else{
                c++;
            }
        }
        if(c == m.length()){
            ans = true;
        }
        n++;
    }
    cout<<n-1;
    return 0;
}