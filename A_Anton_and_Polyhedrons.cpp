#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, i = 1;
    cin >> n;
    while (i <= n)
    {
        string str;
        cin >> str;
            if(str ==  "Icosahedron")
                count += 20;

            else if (str == "Cube")
                count += 6;
            
            else if(str == "Tetrahedron")
                count += 4;

            else if(str == "Dodecahedron")
                count += 12;
            else if(str == "Octahedron")
                count += 8;
            
        i++;
    }
    cout << count;

    return 0;
}