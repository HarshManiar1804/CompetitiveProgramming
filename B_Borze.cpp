#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	
	for(int i =0;i<str.length();i++){
		if(str[i] == '.'){
			cout<<'0';
		}
		if(str[i]=='-' && str[i+1]=='.'){
			cout<<'1';
			i++;
		}
		if(str[i]=='-' && str[i+1]=='-'){
			cout<<'2';
			i++;
		}
	}
	return 0;
}