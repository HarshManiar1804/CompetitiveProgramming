#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int number , number_1;

    int len = s.length();

    if(s.at(0) != '-'){
        cout << s << endl;
        exit(0);
    }else{
        char c = max(s.at(len-1) , s.at(len-2));
        char v = min(s.at(len-1) , s.at(len-2));
        if(len == 3 && v == '0'){
            cout << 0 << endl;
            exit(0);
        }
      
        if(c == s.at(len -1)){
            for(int i = 0 ; i < len -1 ; i++){
                cout << s.at(i);
            }
            cout << endl;
        }else{
            s.at(len -2) = s.at(len -1);
            for(int i = 0 ; i < len -1 ; i++){
                cout << s.at(i);
            }
            cout << endl;
        }
    }
    return 0;
}