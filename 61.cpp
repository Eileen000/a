#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,r;
	while(cin>>s>>r)
	{
		int n=s.size();
		for(int i=0;i<n;i++)
		{
			if(s[i]==r[i])
				cout<<'0';
			else if(s[i]!=r[i])
				cout<<'1';
		}
		cout<<endl;
	}
	return 0;
}
