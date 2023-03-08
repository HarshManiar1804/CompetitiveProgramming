#include <bits/stdc++.h>
using namespace std;
int main()
{
    int totalTime = 240, problems, timeLeft, mul = 5, solved = 0, take = 1, time = 0;

    cin >> problems >> timeLeft;
    timeLeft = totalTime - timeLeft;
    // cout << "timeLeft is : " << timeLeft << endl;

    for (int i = 1; i <= problems; i++)
    {
        
            time += mul;
            mul += 5;
        if (time <= timeLeft)
        {
            solved++;    
        }
        else{
            break;
        }
        // cout << time << endl;
        
    }
    cout << solved;

    return 0;
}