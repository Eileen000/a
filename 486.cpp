#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	while(cin>>n)
	{
		long long x,y;
		if(n%2)
		{
			x=(-1)*(n/2+1)*(n/2+1);
			y=(n/2+1)*(n/2);
		}
		else
		{
			x=(-1)*(n/2)*(n/2);
			y=(n/2+1)*(n/2);
		}
		cout<<x+y<<endl;
	}
	return 0;
}
