#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,find[4]={0};
    int a=0,b=0,c=0,e=0;
    cin>>k;//got punched in the face with a frying pan
    cin>>l;//got his tail shut into the balcony door
    cin>>m;//got his paws trampled with sharp heels
    cin>>n;//dragon to call her mom
    cin>>d;//total dragons

    for(int i=1;i<=d;i++){
        if(i%k == 0){
            a++;
        }
        else if (i % l ==0){
            b++;
        }
        else if (i % m ==0){
            c++;
        }
        else if(i % n ==0){
            e++;
        }
    }

    int sum = a+b+c+e;

    cout<<d-(d-sum);

    return 0;
}