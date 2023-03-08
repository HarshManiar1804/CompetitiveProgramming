#include <bits/stdc++.h>
using namespace std;
#define MX 10000
bool sq[MX+5];
int main()
{
	for (int i=1;i*i<=MX;i++)
	sq[i*i]=1;
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		bool ok=1;
		while (n--)
		{
			int a;
			scanf("%d",&a);
			ok&=sq[a];
		}
		puts(ok? "NO":"YES");
	}
}