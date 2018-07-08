#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,r;
	while(cin>>s>>r)
	{
		for(int i=0;i<s.size();i++)
		   s[i]=tolower(s[i]);
		for(int i=0;i<r.size();i++)
			r[i]=tolower(r[i]);
		if(s>r)
			cout<<1<<endl;
		if(s==r)
			cout<<0<<endl;
		if(s<r)
			cout<<-1<<endl;
	}
	return 0;
}
