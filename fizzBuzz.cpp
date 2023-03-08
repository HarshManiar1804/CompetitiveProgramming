#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;

    if(input % 3 == 0 && input % 5 ==0){
        cout<<"fizzBuzz";
    }
    else if(input % 3 == 0){
        cout<<"fizz";
    }
    else if(input % 5 == 0){
        cout<<"Buzz";
    }
    else{
        cout<<" ";
    }
    return 0;
}