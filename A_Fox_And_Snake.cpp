#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col, d;
    cin >> row >> col;
    bool check = false;

    for (int i = 1; i <= row; i++)
    {
        if(i % 2 ==0){
            check = !check;
        }
        for (int j = 1; j <= col; j++)
        {
            if (((i % 2 != 0 ) || (j == 1 && !check)) || ((i % 2 != 0 ) ||  (j == col && check)))
            {
                cout << "#"; 
            }
            else
            {
                cout<<".";
            }

        }

        cout << endl;
    }
    return 0;
}