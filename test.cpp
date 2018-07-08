#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=1,y=1,now;
	int a,b;
	cin>>a>>b;
	cout<<x<<" "<<y<<" ";
	for(int i=3;i<=100;i++)
	{
		now=(a*x+b*y)%7;
		cout<<now<<" ";
		y=x;
		x=now;
	}
	return 0;
}
