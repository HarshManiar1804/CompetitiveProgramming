#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i = 1, k, n, w, cost=0,sum;
    cin >> k;//first price
    cin >> n;//total amount 
    cin >> w;//no of bananas

    while (i <= w)
    {
        sum=k;
        sum*= i;
        cost +=sum;
        i++;
     }
     if(cost > n){
          cout << cost- n;
     }
     else{
         cout<<0;
     }

    return 0;
}