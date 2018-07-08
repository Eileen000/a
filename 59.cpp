#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		int cnt=0;
		for(int i=0;i<s.size();i++)
			if(s[i]>='a'&&s[i]<='z')
				cnt++;
		int x=s.size()-cnt;
		if(x>cnt)
			for(int i=0;i<s.size();i++)
				s[i]=toupper(s[i]);
		else if(x<=cnt)
			for(int i=0;i<s.size();i++)
				s[i]=tolower(s[i]);
		cout<<s<<endl;
	}
	return 0;
}
