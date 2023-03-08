#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    if ((str2.compare(str1)) == 0)
        cout << str2;
    else if (str2.compare(str1) < 0)
        cout << str2;
    else
        cout << str1;
    return 0;
}