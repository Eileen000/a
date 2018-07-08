#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		int flag=0;
		for(int i=0;i<=s.size()-3;i++)
		{
			if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
			{
				if(flag&&i<s.size()-3)
					{
						flag=0;
						cout<<" ";
					}
			}
			else if(i==s.size()-3)
			{
				for(int k=s.size()-3;k<s.size();k++)
					cout<<s[k];
			}
			else if(i<s.size()-3)
			{
				cout<<s[i];
				flag=1;	
			}		
		}
		cout<<endl;
	}
	return 0;
}
