#include <bits/stdc++.h>
#include<vector>
#include <array>
// #define int long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int num;
        cin >> num;

        if (num <= 9)
        {
            cout << 1 << endl;
            cout << num << endl;
        }
        else
        {
            int count = 0;
            vector<int> vec(5);
            for (int i = 0; num > 0; i++)
            {

                int rem = num % 10;
                num /= 10;

                if (rem != 0)
                {
                    count++;
                }
                // cout<<(pow(10,i)*rem)<<" ";
                int temp = (pow(10, i) * rem);
                vec.push_back(temp);
            }
            cout << count << endl;
            
            for (int i = 0; i < vec.size(); i++){
            	if(vec[i] !=0){
            		cout << vec[i] << " ";	
				}
			}
            cout << endl;
        }
    }
    return 0;
}