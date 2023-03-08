#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str;
    int count = 0, i;
    getline(cin, str);
    bool check = true;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (((str[0] >= 65 && str[0] <= 90) || (str[0] >= 97 && str[0] <= 122)) && check)
        {
            count++;
            check = false;
        }
        if (str[i] == ' ' && ((str[i + 1] >= 65 && str[i + 1] <= 90) || (str[i + 1] >= 97 && str[i + 1] <= 122)))
            count++;
    }
    cout << count;
    return 0;
}