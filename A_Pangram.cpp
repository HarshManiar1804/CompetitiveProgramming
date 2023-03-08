#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0;
    string s;
    cin >> n;
    cin >> s;

    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());
    // bool abc= contains(abcd, s[0]);
    // cout<<s<<endl;

    if (s.length() < 26)
    {
        cout << "NO";
    }
    else
    {
        for (int ascii = 97; ascii <= 122; ascii++)
        {
            for (int i = 0; i < s.length();)
            {
                if (int(s[i]) != ascii)
                {
                    i++;
                    continue;
                }
                else
                {
                    c++;
                    i+=count(s.begin(), s.end(), s[i]);
                }
                
            }
        }

        if(c==26){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }

    return 0;
}