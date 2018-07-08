#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	string x="hello";
	while(cin>>s)
	{
		int cnt=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==x[cnt])
			{
				cnt++;
				continue;
			}
		}
		if(cnt>=5)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	return 0;
}
