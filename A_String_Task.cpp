#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sl;
    cin>>sl;
    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    for(int i =0;i<sl.length();i++){
        switch(sl[i]){
            case 'a' :case 'e':case 'i': case 'o': case 'u':case 'y':case 'A': case 'E': case 'I': case 'O': case 'U':case 'Y': 
            cout<<"";
            break;
            default:
            cout<<'.'<<sl[i];
        }
    }
    return 0;
}